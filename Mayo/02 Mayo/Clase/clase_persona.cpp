#include <iostream>
using namespace std;

class Persona
{
    private:
    string nombre;
    string apellido;
    int edad;

    public:
    Persona p(string _nombre, string _apellido, int _edad){
        nombre=_nombre;
        apellido=_apellido;
        edad=_edad;
    }

    string getNombre(){
        return nombre;
    }

    void setNombre(string _nombre){
        nombre=_nombre;
    }

    string getApellido(){
        return apellido;
    }

    void setApellido(int _apellido){
        apellido=_apellido;
    }

    int getEdad(){
        return edad;
    }

    void setEdad(int _edad){
        edad=_edad;
    }

};