#include <iostream>
#include "persona.cpp"

using namespace std;

class Empleado{
    private:
    string puesto;
    float sueldo;
    int antiguedad;

    public:
    Empleado(string _puesto, float _sueldo, int _antiguedad){
        puesto=_puesto;
        sueldo=_sueldo;
        antiguedad=_antiguedad;
    }

    string getPuesto(){
        return puesto;
    }

    void setPuesto(string _puesto){
        puesto=_puesto;
    }

    float getSueldo(){
        return sueldo;
    }

    void setSueldo(float _sueldo){
        sueldo=_sueldo;
    }

    int getAntiguedad(){
        return antiguedad;
    }

    void setAntiguedad(int _antiguedad){
        antiguedad=_antiguedad;
    }

};