#include <iostream>
#include "estudianteinvestigador.cpp"
using namespace std;

int main(){
    Estudianteinvestigador pi1("006","KanteTemer@gmail.com","Kante", "Temer", "98451106", "46233", "Medicina", "Soluciones de cualquier dolor con plantas medicinales");
    Estudianteinvestigador pi2("002","ArnoldAscencio@gmail.com","Ascencio", "Arnold", "16198492", "75612", "Sistemas", "Guia completa para ser un buen programador");

    pi1. getDatos();
    cout<<"\n";
    pi2. getDatos();
    cout<<"\n";


    return 0;
}