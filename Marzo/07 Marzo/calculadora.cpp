//07/03/2023
#include <iostream>
using namespace std;

//creamos las funciones para cada operacion a realizar con los numeros

float calcular_suma(float numero1, float numero2)
{
    float suma=0;
    suma= numero1 + numero2;
    return suma;
}

float calcular_resta(float numero1, float numero2)
{
    float resta=0;
    resta= numero1 - numero2;
    return resta;
}

float calcular_multiplicacion(float numero1, float numero2)
{
    float multiplicacion=0;
    multiplicacion= numero1 * numero2;
    return multiplicacion;
}

float calcular_division(float numero1, float numero2)
{
    float division=0;

    //creamos una condicion ya que un numero no puede ser dividido entre 0 ya que saldra indeterminado

    if (numero2==0)
    {
        cout<<"El numero no puede ser dividido entre 0, ERROR"<<endl;
    }
    else
    {
        division= numero1 / numero2;
    }
    
    return division;
}

int main()
{
    //declaramos los tipos de las variables y los usuarios ingresan los numeros

    float numero1, numero2;
    int opcion;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>numero2;

    cout<<"Ahora selecciona la opcion que usted quiera"<<endl;
    cout<<"1. "<<endl;
    cout<<"2. "<<endl;
    cout<<"3. "<<endl;
    cout<<"4. "<<endl;
    cin>>opcion;

    //creamos un switch para que seleccione la opcion que determinara la operacion a realizar

    switch (opcion)
    {
    case 1:

    //llamaremos a las funciones que creamos arriba antiguamente
    
        cout<<"Usted eligio la opcion suma"<<endl;
        cout<<"Por lo tanto, la suma sera "<<calcular_suma(numero1,numero2);
        break;

    case 2:
        cout<<"Usted eligio la opcion resta"<<endl;
        cout<<"Por lo tanto, la resta sera "<<calcular_resta(numero1,numero2);
        break;

    case 3:
        cout<<"Usted eligio la opcion multiplicacion"<<endl;
        cout<<"Por lo tanto, la multiplicacion sera "<<calcular_multiplicacion(numero1,numero2);
        break;

    case 4:
        cout<<"Usted eligio la opcion division"<<endl;
        cout<<"Por lo tanto, la division sera "<<calcular_division(numero1,numero2);
        break;
    
    default:
    cout<<"No ingreso las opciones a elegir";
        break;
    }

    return 0;

}
