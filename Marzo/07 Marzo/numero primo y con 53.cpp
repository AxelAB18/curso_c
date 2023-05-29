//16/03/2023
#include <iostream>
using namespace std;

int main()
{
    //declaramos el tipo de la variable numero y pedimos al usuario que nos ingrese el numero que quiera
    int numero, *p;
    //direccion de memoria del numero
    p=&numero;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;

    //ahora hacemos una funcion de tipo bool del valor, que puede tomar 2 valores (verdadero y falso)
    bool es_primo= true;
    //creamos un for tambien con la intencion de que recorra hasta el numero y que si el residuo es 0, no es primo
    //Nota: el i recorre desde el 2 porque si ponemos 1 todos los numeros son divisibles entre 1, es por eso que recorremos desde el 2
    for (int i = 2; i < numero; i++)
    {
        //es divisible, por lo tanto, el valor para primo es falso e imprimira que no es primo, en caso contrario, imprimira que si es primo
        if (numero%i==0) es_primo= false;
    }
    if (es_primo==false)
    {
        cout<<"El numero no es primo"<<endl;
    }
    else
    {
        cout<<"El numero es primo"<<endl;
    }
    
    //imprimimos la direccion de memoria y el valor que toma el puntero
    cout<<"La direccion de memoria es : "<<p<<endl;
    cout<<"La variable toma el valor de : "<<*p<<endl;

    //actividad 3 reemplzamos el puntero por 53
    cout<<"********REEMPLAZANDO POR 53***********"<<endl;
    *p=53;
    //ahora en este ejercicio estamos reemplazando el valor que tenia antes el puntero por 53
    cout<<"El nuevo cambio de la variable toma el valor de : "<<*p<<endl;

    return 0;
}