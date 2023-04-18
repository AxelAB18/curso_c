#include <iostream>
#include <string>
#include "animal.cpp"

using namespace std;

class Perro : animal
{
    private:
    string nombre;
    bool ladra;
    bool is_domesticado;
    string genero;

    public:
    Perro(string _nombre, bool _ladra, bool _is_domesticado, string _genero, string _orejas, string _cola, string _pelaje, string _ojos, int _nro_patas, bool _dientes, string _familia) :animal(_orejas,_cola,_pelaje,_ojos,_nro_patas,_dientes,_familia)
    {
        nombre=_nombre;
        ladra=_ladra;
        is_domesticado=_is_domesticado;
        genero=_genero;
    }

string getNombre(){
    return nombre;
}

void setNombre(string _nombre){
    nombre=_nombre;
}

bool getLadra(){
    return ladra;
}

void setLadra(bool _ladra){
    ladra=_ladra;
}

bool getIs_domesticado(){
    return is_domesticado;
}

void setIs_domesticado(bool _is_domesticado){
    is_domesticado=_is_domesticado;
}

string getGenero(){
    return genero;
}

void setGenero(string _genero){
    genero=_genero;
}

void getDatos(){
    cout<<"Los datos del gato es : "<<getNombre()<<","<<","<<getLadra()<<","<<getIs_domesticado()<<","<<getGenero()<<","<<getOrejas()<< "," <<getCola()<<"," << getPelaje()<< "," << getOjos()<"," << getN_patas() << "," << getDientes() << " ," << getFamilia()
}

};

