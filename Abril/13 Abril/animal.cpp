//clase base o clase padre
#include <iostream>
#include <string>

using namespace std;

class Animal{
    protected:
    string orejas;
    string cola;
    string pelaje;
    string ojos;
    int nro_patas;
    bool dientes;
    string familia;

    public:
    Animal(string _orejas, string _cola, string _pelaje, string _ojos, int _nro_patas, bool _dientes, string _familia)
    {
        orejas=_orejas;
        cola=_cola;
        pelaje=_pelaje;
        ojos=_ojos;
        nro_patas=_nro_patas;
        dientes=_dientes;
        familia= _familia;
    }

//getter adn setter
string getOrejas(){
    return orejas;
}

void setOrejas(string _orejas){
    orejas=_orejas;
}

string getCola(){
    return cola;
}

void setCola(string _cola){
    cola= _cola;
}

string getPelaje(){
    return pelaje;
}

void setPelaje(string _pelaje){
    pelaje= _pelaje;
}

string getOjos(){
    return ojos;
}

void setOjos(string _ojos){
    ojos= _ojos;
}

int getNropatas(){
    return nro_patas;
}

void setNropatas(int _nro_patas){
    nro_patas= _nro_patas;
}

bool getDientes(){
    return dientes;
}

void setDinetes(bool _dientes){
    dientes= _dientes;
}

string getFamilia(){
    return familia;
}

void setFamilia(string _familia){
    familia= _familia;
}

};