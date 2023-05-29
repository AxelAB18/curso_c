#include <iostream>
using namespace std;

class Investigacion
{
    protected:
    string codigo;
    string especialidad;
    string proyecto;

    public:
    Investigacion(string _codigo="", string _especialidad="", string _proyecto=""){
        codigo=_codigo;
        especialidad=_especialidad;
        proyecto=_proyecto;
    }

    string getCodigo(){
        return codigo;
    }

    void setCodigo(string _codigo){
        codigo=_codigo;
    }

    string getEspecialidad(){
        return especialidad;
    }

    void setEspecialidad(int _especialidad){
        especialidad=_especialidad;
    }

    string getProyecto(){
        return proyecto;
    }

    void setProyecto(string _proyecto){
        proyecto=_proyecto;
    }

};