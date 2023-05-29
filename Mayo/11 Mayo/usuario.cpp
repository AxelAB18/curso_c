#include <iostream>
#include "prestado.cpp"
#include "persona.cpp"
using namespace std;

class Usuario : Persona
{
private:
    string codigo_usuario;
    Prestado prestados;
public:
    Usuario(string _codigo_usuario="",string _dni="", string _apellidos="", string _nombres="", string _correo="", string _telefono="", string _direccion="") : Persona (_dni, _apellidos, _nombres, _correo, _telefono, _direccion)
    {
        codigo_usuario=_codigo_usuario;
    }

    string getCodigoUsu()
    {
        return codigo_usuario;
    }

    void setCodigoUsu(string _codigo_usuario)
    {
        codigo_usuario=_codigo_usuario;
    }

    Prestado getPrestado()
    {
        return prestados;
    }

    void setPrestado(Prestado _prestados)
    {
        prestados=_prestados;
    }

    string getDatosUsu()
    {
        return " ----> Codigo_usuario: " + codigo_usuario +  "------> dni:" + dni + " -----> Apellidos: " + apellidos + "\n" +  "------> Nombres:" +nombres + " -----> Correo: " + correo +  "------> Telefono:" +telefono + " -----> Direccion: " + direccion;
    }

};

class Bibliotecario : Persona
{
private:
    string codigo_biblio;
public:
    Bibliotecario(string _codigo_biblio="", string _dni="", string _apellidos="", string _nombres="", string _correo="", string _telefono="", string _direccion="") : Persona (_dni, _apellidos, _nombres, _correo, _telefono, _direccion)
    {
        codigo_biblio=_codigo_biblio;
    }

    string getCodigoBiblio()
    {
        return codigo_biblio;
    }

    void setCodigoBiblio(string _codigo_biblio)
    {
        codigo_biblio=_codigo_biblio;
    }

    string getDatosBiblio()
    {
        return " ----> Codigo_bibliotecario: " + codigo_biblio +  "------> dni:" + dni + " -----> Apellidos: " + apellidos + "\n" +  "------> Nombres:" +nombres + " -----> Correo: " + correo +  "------> Telefono:" +telefono + " -----> Direccion: " + direccion;
    }
    
};


