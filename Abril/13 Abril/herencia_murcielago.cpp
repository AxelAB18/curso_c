//13/04/2023
#include <string>
#include <iostream>
#include "Murcielago.cpp"

using namespace std;

int main()
{
    /*string _nombre, int _nro_alas, bool _vuela, bool _is_nocturno, string _genero, string _orejas, string _cola,
     string _pelaje, string _ojos, int _nro_patas, bool _dientes, string _familia */
 Murcielago murciel_("Covidia", 2, true, true, "Hembra", "dos orejas", "no tiene cola", " no tiene pelaje", "ojos color cafe", 2, true, "Chiroptera" );
 murciel_. getDatos();
 cout << "\n";

    return 0;
}