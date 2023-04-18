#include <iostream>
using namespace std;

//hacemos la funcion void para que no nos retorne nada
void numero_par_impar(int numero)
{
    //hacemos una condicional para ver si el numero es par o impar
    if (numero%2==0)
    {
        cout<<"El numero es par"<<endl;
    }
    else
    {
        cout<<"El numero es impar"<<endl;
    }
}

int main()
{
    //declaramos el tipo de la variable y utilizamos el puntero
    int numero, *p;
    //direccion de memoria del numero
    p=&numero;

    //pedimos al usuario que ingrese el  numero  que el quiera
    cout<<"Ingrese el numero que usted quiera"<<endl;
    cin>>numero;

    //hacemos uso de la funcion que imprimira su contenido
    numero_par_impar(numero);

    //imprimimos la direccion de memoria del numero
    cout<<"La direccion de memmoria del numero es : "<<&numero<<endl;

    return 0;
}