#include <iostream>
using namespace std;

class Plato
{
private:
    string nombre_plato;
    float costo_plato;
public:
    Plato(string _nombre_plato="", float _costo_plato=0)
    {
        nombre_plato=_nombre_plato;
        costo_plato=_costo_plato;
        Plato plato[5];
    }

    string getNombrePlato()
    {
        return nombre_plato;
    }

    void setNombrePlato(string _nombre_plato)
    {
        nombre_plato=_nombre_plato;
    }

    float getCostoPlato()
    {
        return costo_plato;
    }

    void setCostoPlato(float _costo_plato)
    {
        costo_plato=_costo_plato;
    }

    void Menu_dia()
    {
        Plato plato[5];
        for (int i = 0; i < 5; i++)
        {
            cout<<"El plato["<<i<<"] es Pachamanca y cuesta 12.00 ";
            cout<<"El plato["<<i<<"] es Lomo saltado y cuesta 10.00";
            cout<<"El plato["<<i<<"] es Ceviche y cuesta 11.00";
            cout<<"El plato["<<i<<"] es Juane y cuesta 13.00";
            cout<<"El plato["<<i<<"] es Arroz con Pollo y cuesta 13.00";
        }
        
    }

};
