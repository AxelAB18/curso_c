#include <iostream>
using namespace std;

int  main(){

    //declaramos el tipo de la variable calend y hacemos que elija una opcion correspondiente
    int calend;
    cout<<"Seleccione un numero del 1  al 12 segun el mes del año"<<endl;
    cout<<"1. ";
    cout<<"2. ";
    cout<<"3. ";
    cout<<"4. ";
    cout<<"5. ";
    cout<<"6. ";
    cout<<"7. ";
    cout<<"8. ";
    cout<<"9. ";
    cout<<"10. ";
    cout<<"11. ";
    cout<<"12. "<<endl;
    cin>>calend;

    //creamos un switch de acuerdo a la opcion que eligio que determinara el mes 
    switch (calend)
    {
    case 1:
        cout<<"Usted eligio el numero 1, por lo tanto el mes que eligio es el mes de Enero"<<endl;
        break;
    case 2:
        cout<<"Usted eligio el numero 2, por lo tanto el mes que eligio es el mes de Febrero"<<endl;
        break;
    case 3:
        cout<<"Usted eligio el numero 3, por lo tanto el mes que eligio es el mes de Marzo"<<endl;
        break;
    case 4:
        cout<<"Usted eligio el numero 4, por lo tanto el mes que eligio es el mes de Abril"<<endl;
        break;
    case 5:
        cout<<"Usted eligio el numero 5, por lo tanto el mes que eligio es el mes de Mayo"<<endl;
        break;
    case 6:
        cout<<"Usted eligio el numero 6, por lo tanto el mes que eligio es el mes de Junio"<<endl;
        break;
    case 7:
        cout<<"Usted eligio el numero 7, por lo tanto el mes que eligio es el mes de Julio"<<endl;
        break;
    case 8:
        cout<<"Usted eligio el numero 8, por lo tanto el mes que eligio es el mes de Agosto"<<endl;
        break;
    case 9:
        cout<<"Usted eligio el numero 9, por lo tanto el mes que eligio es el mes de Septiembre"<<endl;
        break;
    case 10:
        cout<<"Usted eligio el numero 10, por lo tanto el mes que eligio es el mes de Octubre"<<endl;
        break;
    case 11:
        cout<<"Usted eligio el numero 11, por lo tanto el mes que eligio es el mes de Noviembre"<<endl;
        break;
    case 12:
        cout<<"Usted eligio el numero 12, por lo tanto el mes que eligio es el mes de Diciembre"<<endl;
        break;
    
    //si no eligio una opcion correspondiente, pasara al default donde imprimiremos que el usuario no ingreso una opcion valida
    default:
    cout<<"No ingreso los numeros del 1 al 12, por favor, vuelvalo a intentar con los limites del numero"<<endl;
        break;
    }

return 0;
}