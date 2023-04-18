#include <iostream>
#include <string>
#include "animal.cpp"

using namespace std;

class Gato : animal
{
    private:
    string nombre;
    int vidas;
    bool maulla;
    bool is_domesticado;
    string genero;

    public:
    Gato(string _nombre, int _vidas, bool _maulla, bool _is_domesticado, string _genero, string _orejas, string _cola, string _pelaje, string _ojos, int _nro_patas, bool _dientes, string _familia) :animal(_orejas,_cola,_pelaje,_ojos,_nro_patas,_dientes,_familia)
    {
        nombre=_nombre;
        vidas=_vidas;
        maulla=_maulla;
        is_domesticado=_is_domesicado;
        genero=_genero;
    }

string getNombre(){
    return nombre;
}

void setNombre(string _nombre){
    nombre=_nombre;
}

int getVidas(){
    return vidas;
}

void setVidas(int _vidas){
    vidas=_vidas;
}

bool getMaulla(){
    return maulla;
}

void setMaulla(bool _maulla){
    maulla=_maulla;
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
    cout<<"Los datos del gato es : "<<getNombre()<<","<<getVidas()<<","<<getMaulla()<<","<<getIs_domesticado()<<","<<getGenero()<<","<<getOrejas()<< "," <<getCola()<<"," << getPelaje()<< "," << getOjos()<"," << getN_patas() << "," << getDientes() << " ," << getFamilia()
}

};
