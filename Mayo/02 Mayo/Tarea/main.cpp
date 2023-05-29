#include <iostream>
#include "clase_profesorinvestigador.cpp"
using namespace std;

int main(){
    /*Profesorinvestigador pi(string _codigo_p, string _nombre, string _dni, string _facultad,
    string _codigo, string _especialidad, string _libros_publ)*/
    Profesorinvestigador pi1("0001", "Nilton","71324650","FCEA","0010","Comer","2");
    Profesorinvestigador pi2("0005", "Lotso","71832109","FIME","0029","Dormir","1");
    Profesorinvestigador pi3("0007", "Luchito","89613244","FIIA","0001","Dibujar","5");
    Profesorinvestigador pi4("0010", "Picuto","14368820","FZ","0023","Quehaceres","0");
    Profesorinvestigador pi5("0015", "Yuriko","93422207","FRNR","0100","Buena labia","3");

    pi1. getDatos();
    cout<<"\n";
    pi2. getDatos();
    cout<<"\n";
    pi3. getDatos();
    cout<<"\n";
    pi4. getDatos();
    cout<<"\n";
    pi5. getDatos(); 

    return 0;
}