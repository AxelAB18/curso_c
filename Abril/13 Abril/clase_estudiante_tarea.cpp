#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Estudiante
{
protected:
    string apellido;
    string nombres;
    string dni;
    string curso;
    string facultad;

public:
    Estudiante (string _apellidos, string _nombres, string _dni, string _curso, string _facultad)
    {
        apellido = _apellidos;
        nombres = _nombres;
        dni = _dni;
        curso=_curso;
        facultad=_facultad;
    }
    // metodos de getter an setter
    string getApellidos()
    {
        return apellido;
    }

    void setApellidos(string _apellidos)
    {
        apellido = _apellidos;
    }

    string getNombres()
    {
        return nombres;
    }

    void setNombres(string _nombres)
    {
        nombres = _nombres;
    }

    string getDni(){
        return dni;
    }

    void setDni(string _dni){
       dni= _dni; 
    }

    string getCurso(){
        return curso;
    }

    void setCurso(string _curso)
    {
        curso=_curso;
    }

    string getFacultad()
    {
        return facultad;
    }
    void setFacultad(string _facultad){
       facultad= _facultad; 
    }
};