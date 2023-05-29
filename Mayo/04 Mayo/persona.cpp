/*1. Implemente una clase persona que contenga como atributos nombres, apellidos, dni, fecha nacimiento, edad. asi mismo
implemente una clase empleado que herede de persona, los atributos de empleado son puesto, sueldo y antiguedad.
cree una clase departamento con los atributos de nombre y siglas que contenga un arreglo de 10 empleados registrados 
imprima un reporte de departamento y sus empleados en txt*/

#include <iostream>
using namespace std;

class Persona
{
    private:
    string nombres;
    string apellidos;
    string dni;
    string fecha_naci;
    int edad;

    public:
    Persona(string _nombres, string _apellidos, string _dni, string _fecha_naci, int _edad){
        nombres=_nombres;
        apellidos=_apellidos;
        dni=_dni;
        fecha_naci=_fecha_naci;
        edad=_edad;
    }
    
    string getNombres(){
        return nombres;
    }

    void setNombres(string _nombres){
        nombres=_nombres;
    }

    string getApellidos(){
        return apellidos;
    }

    void setApellidos(string _apellidos){
        apellidos=_apellidos;
    }

    string getDni(){
        return dni;
    }

    void setDni(string _dni){
        dni=_dni;
    }

    string getFecha_naci(){
        return fecha_naci;
    }

    void setFecha_naci(string _fecha_naci){
        fecha_naci=_fecha_naci;
    }

    int getEdad(){
        return edad;
    }

    void setEdad(int _edad){
        edad=_edad;
    } 

};