//13/04/2023
#include <string>
#include <iostream>
#include "Gato.cpp"

using namespace std;

int main()
{
    /*string _nombre, int _vidas, bool _maulla, bool _is_domesticado, string _genero, string _orejas,
    string _cola, string _pelaje, string _ojos, int _n_patas, bool _dientes, string _familia) */
 Gato gat("Dr.Senpai", 8, true, true, "Macho", "dos orejas", "una cola", "pelaje suave", "ojos de cocodrilo", 4, true, "Felinos" );
 gat. getDatos();
 cout << "\n";

    return 0;
}