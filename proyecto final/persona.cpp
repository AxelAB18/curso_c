#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    string apellido;
    string dni;
    int edad;
    string sexo;
public:
    Persona(string _nombre="", string _apellido="", string _dni="", int _edad=0, string _sexo="")
    {
        nombre=_nombre;
        apellido=_apellido;
        dni=_dni;
        edad= _edad;
        sexo= _sexo;
    }

    string getNombre()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre=_nombre;
    }

    string getApellido()
    {
        return apellido;
    }

    void setApellido(string _apellido)
    {
        apellido=_apellido;
    }

    string getDni()
    {
        return dni;
    }

    void setDni(string _dni)
    {
        dni=_dni;
    }

    int getEdad()
    {
        return edad;
    }

    void setEdad(int _edad)
    {
        edad=_edad;
    }

    string getSexo()
    {
        return sexo;
    }

    void setSexo(string _sexo)
    {
        sexo=_sexo;
    }

};