#include <iostream>
#include "persona.cpp"
#include <string.h>
#include "curso.cpp"
using namespace std;

class Estudiante : Persona
{
public:
    string codigo_est;
    string seccion;
    Curso cursos[5];
    int numCurso = 0;

public:
    Estudiante(string _codigo_est = "", string _nombre = "", string _apellido = "", string _dni = "", int _edad = 0, string _sexo = "",string _seccion="") : Persona(_nombre, _apellido, _dni, _edad, _sexo)
    {
        codigo_est = _codigo_est;
        seccion=_seccion;
    }

    string getCodigoest()
    {
        return codigo_est;
    }

    void setCodigoest(string _codigo_est)
    {
        codigo_est = _codigo_est;
    }
     string getSeccion()
    {
        return seccion;
    }
    void setSeccion(string _seccion)
    {
        seccion = _seccion;
    }
    Curso getCurso(int id)
    {
        return cursos[id];
    }
    void agregarCurso(Curso curso)
    {
        if (numCurso < 5)
        {
            cursos[numCurso] = curso;
            numCurso++;
        }
        else
        {
            cout << "El estudiante completo el numero de cursos";
            cout << "\n";
        }
    }
    string getEstudiante(){
        return "codigo de estudiante: "+codigo_est+"----nombre: "+getNombre()+"----apellido: "+getApellido()+"----DNI: "+getDni()+"----edad: "+to_string(getEdad())+"----sexo: "+getSexo()+"-----seccion: "+seccion;
    }
    void ingresar_notas(){
        
        float nota1 = 0, nota2 = 0, nota3 = 0;
        for (int i = 0; i < 5; i++)
            {
                cout << "--------------------------------";
                cout << "\n";
                cout<< "Ingrese las notas del estudiante: " <<getNombre()<<" "<<getApellido()<<" "<<seccion<<endl;
                cout<<cursos[i].getNombre_curso();
                cout << "\n";
                cout << "--------------------------------";
                cout << "\n";
                nota1 = 0;
                nota2 = 0;
                nota3 = 0;
                cout << "Ingrese la nota 1 :";
                do{ 
                cin >> nota1;
                }while(nota1<1||nota1>20);
                cout << "\n";
                cout << "Ingrese la nota 2 :";
                do{ 
                cin >> nota2;
                }while(nota2<1||nota2>20);
                cout << "\n";
                cout << "Ingrese la nota 3:";
                do{ 
                cin >> nota3;
                }while(nota3<1||nota3>20);
                cout << "\n";
                cursos[i].setNota1(nota1);
                cursos[i].setNota2(nota2);
                cursos[i].setNota3(nota3);
                cout << "\n";
            }

    }
    string getNombre_seccion(){
        return getNombre()+" "+getApellido()+" "+seccion;
    }
};

class Docente : Persona
{
private:
    string codigo_prof;
    string correo_prof;
    string telefono;

public:
    Docente(string _codigo_prof = "", string _correo_prof = "", string _telefono = "", string _nombre = "", string _apellido = "", string _dni = "", int _edad = 0, string _sexo = "") : Persona(_nombre, _apellido, _dni, _edad, _sexo)
    {
        codigo_prof = _codigo_prof;
        correo_prof = _correo_prof;
        telefono = _telefono;
    }

    string getCodigoProf()
    {
        return codigo_prof;
    }

    void setCodigoProf(string _codigo_prof)
    {
        codigo_prof = _codigo_prof;
    }

    string getCorreoProf()
    {
        return correo_prof;
    }

    void setCorreoProf(string _correo_prof)
    {
        correo_prof = _correo_prof;
    }

    string getTelefono()
    {
        return telefono;
    }

    void setTelefono(string _telefono)
    {
        telefono = _telefono;
    }
    string getDatos_docente(){
        return "codigo profesor: "+codigo_prof+"----correo profesor: "+correo_prof+"----telefono: "+telefono+"---Nombre: "+getNombre()+"apellido: "+getApellido()+"-----DNI: "+getDni()+"----Edad: "+to_string(getEdad())+"----sexo: "+getSexo();
    }
    string getProfe(){
        return getNombre()+" "+getApellido();
    }
   
};