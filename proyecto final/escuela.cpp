#include <iostream>
using namespace std;

class Escuela
{
    protected:
    string nombre_co;
    string direccion;
    string tipo;
    string telefono;
    public:
    Escuela(string _nombre_co, string _direccion, string _tipo, string _telefono)
    {
        nombre_co=_nombre_co;
        direccion=_direccion;
        tipo=_tipo;
        telefono=_telefono;
    }

    string getNombre()
    {
        return nombre_co;
    }

    void setNombre(string _nombre_co)
    {
        nombre_co=_nombre_co;
    }

    string getDireccion()
    {
        return direccion;
    }

    void setDireccion(string _direccion)
    {
        direccion=_direccion;
    }

    string getTipo()
    {
        return tipo;
    }

    void setTipo(string _tipo)
    {
        tipo=_tipo;
    }

    

    string getTelefono()
    {
        return telefono;
    }

    void setTelefono(string _telefono)
    {
        telefono=_telefono;
    }

};