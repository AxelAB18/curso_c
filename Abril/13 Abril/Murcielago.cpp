//13/04/2023
#include <iostream>
#include <string>
#include "animal.cpp"

using namespace std;

class Murcielago : Animal
{
    private:
    string nombre;
    int nro_alas;
    bool vuela;
    bool is_nocturno;
    string genero;

    public:
    Murcielago(string _nombre,int _nro_alas, bool _vuela, bool _is_nocturno, string _genero, string _orejas, string _cola, string _pelaje, string _ojos, int _nro_patas, bool _dientes, string _familia) : Animal(_orejas,_cola,_pelaje,_ojos,_nro_patas,_dientes,_familia)
    {
        nombre=_nombre;
        nro_alas=_nro_alas;
        is_nocturno=_is_nocturno;
        genero=_genero;
    }

string getNombre(){
    return nombre;
}

void setNombre(string _nombre){
    nombre=_nombre;
}

int getNroalas(){
    return nro_alas;
}

void setNroalas(int _nro_alas){
    nro_alas=_nro_alas;
}

bool getVuela(){
    return vuela;
}

void setVuela(bool _vuela){
    vuela=_vuela;
}

bool getIs_nocturno(){
    return is_nocturno;
}

void setIs_nocturno(bool _is_nocturno){
    is_nocturno=_is_nocturno;
}

string getGenero()
{
    return genero;
}

void setGenero(string _genero)
{
    genero=_genero;
}

void getDatos(){
    cout<<"Los datos del gato es : "<<getNombre()<<","<<","<<getNroalas()<<","<<getVuela()<<","<<getIs_nocturno()<<","<<getGenero()<<","<<getOrejas()<< "," <<getCola()<<"," << getPelaje()<< "," << getOjos()<<"," << getNropatas() << "," << getDientes() << " ," << getFamilia();
}

};
