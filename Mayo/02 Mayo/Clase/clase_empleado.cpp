#include <iostream>
using namespace std;

class Empleado
{
    private:
    string puesto;
    float salario;
    int edad;

    public:
    Empleado emp(string _puesto, float _salario){
        puesto=_puesto;
        salario=_salario;
    }

    string getPuesto(){
        return puesto;
    }

    void setPuesto(string _puesto){
        puesto=_puesto;
    }

    float getSalario(){
        return salario;
    }

    void setSalario(float _salario){
        salario=_salario;
    }

};