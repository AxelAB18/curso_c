#include <iostream>
using namespace std;
class Curso
{
private:
    string nombre_curso;
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;

public:
    Curso(string _nombre_curso = "")
    {
        nombre_curso = _nombre_curso;
    }
    string getNombre_curso()
    {
        return nombre_curso;
    }
    void setNombre_curso(string _nombre_curso)
    {
        nombre_curso = _nombre_curso;
    }
    float getNota1()
    {
        return nota1;
    }
    void setNota1(float _nota1)
    {
        nota1 = _nota1;
    }
    float getNota2()
    {
        return nota1;
    }
    void setNota2(float _nota2)
    {
        nota2 = _nota2;
    }
    float getNota3()
    {
        return nota3;
    }
    void setNota3(float _nota3)
    {
        nota3 = _nota3;
    }

    float promedio()
    {
        float pr = 0;
        pr = (nota1 + nota2 + nota3) / 3;
        return pr;
    }
    string getDatos_curso()
    {
        return nombre_curso;
    }
    string toString()
    {
        float pr = promedio();
        return  "Curso: " + nombre_curso + " --> Promedio: " + to_string(pr);

    }
};