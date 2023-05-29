#include <iostream>
#include "empleado.cpp"
using namespace std;

class Departamento
{
    private:
    Empleado empleados[10];
    string nombre;
    string siglas;

    public:
    Departamento(string _nombre, string _siglas)
    {
        nombre=_nombre;
        siglas=_siglas;
    }
    
    string getNombre(){
        return nombre;
    }

    void setNombre(string _nombre){
        nombre=_nombre;
    }

    string getSiglas(){
        return siglas;
    }

    void setSiglas(string _siglas){
        siglas=_siglas;
    }

};