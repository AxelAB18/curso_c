#include <iostream>
#include "vehiculo.cpp"
using namespace std;

class Automoviles : Vehiculo
{

private:
    string color;
    string marca;

public:
    Automoviles(string _color, string _marca, int _cilindrada_motor, int _numero_asientos, int _numero_ruedas, int _numero_puertas, int _certificacion_segur):Vehiculo(_cilindrada_motor, _numero_asientos, _numero_ruedas, _numero_puertas,_certificacion_segur){
        color=_color;
        marca=_marca;
    }

    string getColor(){
        return color;
    }

    void setColor(string _color){
        color=_color;
    }

    string getMarca(){
        return marca;
    }

    void setMarca(string _marca){
        marca=_marca;
    }
    
};