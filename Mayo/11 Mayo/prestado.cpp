#include <iostream>
#include "libro.cpp"
using namespace std;

class Prestado
{
private:
    string prestado;
    Libro libros[3];
    int num_libro = 0;
public:
    Prestado(string _prestado="")
    {
        prestado=_prestado;
    }

    string getPrestadoo()
    {
        return prestado;
    }

    void setPrestado(string _prestado)
    {
        prestado=_prestado;
    }

    Libro getLibro(int id)
    {
       return libros[id];
    }
    void AgregarLibro(Libro libr){
        if(num_libro<3){
            libros[num_libro] = libr;
            num_libro++;
        }
    }
    string MostrarLibro(int a){

        if(sizeof(libros)/sizeof(libros[0])!= 0){
            for (int i = 0; i < a; i++)
            {
                return libros[i].getData() + "endl";
            }
        }
    }
};

