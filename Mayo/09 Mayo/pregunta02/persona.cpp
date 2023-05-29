#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona
{
protected:
 string apellido;
    string nombres;
 string dni;

public:
    Persona(string _apellidos, string _nombres, string _dni)
    {
        apellido = _apellidos;
        nombres = _nombres;
        dni = _dni;
    }
    // Metodos de getter an setter
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

    void setNombre(string _nombre)
    {
        nombres = _nombre;
    }

    string getDni()
    {
        return dni;
    }

    void setDni(string _dni)
    {
        dni = _dni;
    }

};