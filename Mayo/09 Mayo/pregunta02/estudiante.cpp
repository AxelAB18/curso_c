/*pregunta 02
implemente un clase estudiante investigador con herencia multiple, persona e investigador, asi mismo el estudiante 
debe pertenecer 
a una facultad, y a un semestre, las investigaciones que realiza el estudiante es por semestre, se debe imprimir un reporte
de investigaciones por estudiante y semestre
imprima como minimo para dos personas

considerar diagrama de clases*/
#include <iostream>
#include <string>
#include <ctime>
#include "persona.cpp"

using namespace std;

class Estudiante : Persona
{
private:
    string codigo_estudiante;
    string correo;

public:
    Estudiante(string _codigo = "", string _correo = "", string _apellidos = "", string _nombres = "", string _dni = "") : Persona(_apellidos, _nombres,_dni)
    {
        codigo_estudiante = _codigo;
        correo = _correo;
    }
    // getter un setter
    string getCodigo()
    {
        return codigo_estudiante;
    }
    void setCodigo(string _codigo)
    {
        codigo_estudiante = _codigo;
    }

    string getCorreo()
    {
        return correo;
    }
    void setCorreo(string _correo)
    {
        correo = _correo;
    }
    string to_string()
    {
        string dato = codigo_estudiante + " " + nombres + " " + apellido + "  " + dni;
        return dato;
    }
    string getDatosP()
    {
        string datos = "Los datos del estudiante son : " +codigo_estudiante + ": " + getNombres() + ", " + getApellidos() + " , " + getDni();
        return datos;
    }
    
    void getDatos()
    {
        cout << "los datos del estudiante es  : " << codigo_estudiante << ": " << getNombres() << ", " << getApellidos() << "      "<<getDni();
        cout << "\n";
    }
};