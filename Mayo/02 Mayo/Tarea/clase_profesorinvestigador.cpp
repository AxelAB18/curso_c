#include <iostream>
#include "clase_profesor.cpp"
#include "clase_investigador.cpp"
using namespace std;

class Profesorinvestigador:Profesor,Investigador{
    private:
    string codigo_p;
    public:
    Profesorinvestigador(string _codigo_p, string _nombre, string _dni, string _facultad, string _codigo, string _especialidad, string _libros_publ):Profesor( _nombre, _dni, _facultad),Investigador( _codigo, _especialidad, _libros_publ){
        codigo_p=_codigo_p;
    }

    string getCodigoP(){
        return codigo_p;
    }

    void setCodigoP(string _codigo_p){
        codigo_p=_codigo_p;
    }

    void getDatos(){
    cout<<"Los datos del profesorinvestigador es : "<<getNombre()<<","<<getDni()
    <<","<<getFacultad()<<","<<getCodigo()<<","<<getEspecialidad()<<","<<getLibrospubl();
}

};