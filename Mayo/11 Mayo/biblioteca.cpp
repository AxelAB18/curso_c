#include<iostream>
#include<string>

using namespace std;

class Biblioteca
{
    //Atributos

    private:
    string codigo;
    string nombre;
    string direccion;
    string telefono;
    
    public:
    Biblioteca(string _codigo="",string _nombre="",string _direccion="",string _telefono="")
    {
        codigo = _codigo;
        nombre = _nombre;
        direccion = _direccion;
        telefono = _telefono;

    }

    //gettter and setter
    string getCodigo()
    {
        return codigo;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getNombre()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getDireccion()
    {
        return direccion;
    }

    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }

    string getTelefono()
    {
        return telefono;
    }

    void setTelefono(string _telefono)
    {
        telefono = _telefono;
    }


};