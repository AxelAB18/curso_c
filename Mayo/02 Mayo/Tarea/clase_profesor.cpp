#include <iostream>
using namespace std;

class Profesor
{
    protected:
    string nombre;
    string dni;
    string facultad;

    public:
    Profesor(string _nombre="", string _dni="", string _facultad=""){
        nombre=_nombre;
        dni=_dni;
        facultad=_facultad;
    }

    string getNombre(){
        return nombre;
    }

    void setNombre(string _nombre){
        nombre=_nombre;
    }

    string getDni(){
        return dni;
    }

    void setDni(string _dni){
        dni=_dni;
    }

    string getFacultad(){
        return facultad;
    }

    void setFacultad(string _facultad){
        facultad=_facultad;
    }
    
};