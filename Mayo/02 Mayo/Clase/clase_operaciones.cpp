#include <iostream>
#include "clase_suma.cpp"
using namespace std;

class Operaciones
{
    private:
    string mensaje;

    public:
    Operaciones o(string _mensaje){
        mensaje= _mensaje;
    }

    string getMensaje(){
        return mensaje;
    }

    void setMensaje(int _mensaje){
        mensaje=_mensaje;
    }

    void imprimir(int numero, int numero2){
    Suma s;
    s.setA(numero);
    s.setB(numero2);
    s.imprimir();
    }
};