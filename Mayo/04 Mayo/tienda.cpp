#include <iostream>
#include "motocicletas.cpp"
#include "automoviles.cpp"
using namespace std;

class Tienda
{
private:
Tienda Motocicletas[5];
Tienda Automoviles[10];
    string nombre;
public:
    Tienda(string _nombre){
        nombre=_nombre;
    }

    string getNombre(){
        return nombre;
    }

    void setNombre(string _nombre){
        nombre=_nombre
    }
};

