#include <iostream>
using namespace std;

class Investigador
{
    protected:
    string codigo;
    string especialidad;
    string libros_publ;

    public:
    Investigador(string _codigo="", string _especialidad="", string _libros_publ=""){
        codigo=_codigo;
        especialidad=_especialidad;
        libros_publ=_libros_publ;
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

    string getLibrospubl(){
        return libros_publ;
    }

    void setLibrospubl(int _libros_publ){
        libros_publ=_libros_publ;
    }

};