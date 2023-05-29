//13/04/2023
#include <string>
#include <iostream>
#include "Perro.cpp"

using namespace std;

int main()
{
    /*string _nombre, bool _ladra, bool _is_domesticado, string _genero, string _orejas,
     string _cola, string _pelaje, string _ojos, int _nro_patas, bool _dientes, string _familia*/
 Perro perr_("Jacinto",  true, true, "Macho", "dos orejas", "tiene una cola", "pelaje esponjoso", "ojos color negro", 4, true, "Canis familiaris" );
 perr_. getDatos();
 cout << "\n";

    return 0;
}