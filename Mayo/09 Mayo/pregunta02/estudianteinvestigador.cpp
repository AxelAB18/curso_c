#include <iostream>
#include "estudiante.cpp"
#include "investigaciones.cpp"
#include "persona.cpp"
using namespace std;

class Estudianteinvestigador:Estudiante,Investigacion{
    private:
    string codigo_p;
    public:
    Estudianteinvestigador(string _codigo_p="", string _correo = "", string _apellidos = "", string _nombres = "", string _dni = "", string _codigo="", string _especialidad="", string _proyecto=""):Estudiante(_apellidos, _nombres, _dni),Investigacion( _codigo, _especialidad, _proyecto){
        codigo_p=_codigo_p;
    }

    string getCodigoP(){
        return codigo_p;
    }

    void setCodigoP(string _codigo_p){
        codigo_p=_codigo_p;
    }

    void getDatos(){
    cout<<"Los datos del profesorinvestigador es : "<<getDatosP()<<" , "<<getCodigoP()<<" , "<<getEspecialidad()<< " , "<<getProyecto(); 
}

};