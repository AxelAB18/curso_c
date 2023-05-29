#include<iostream>
using namespace std;

int calcular_calculadora(int a, int b); //Hcemos la funcion para la calculadora que querra saber que operacion realizaras//
int calcular_calculadora(int a, int b){
    int calculadora=0; // inicializamos la calculadora
    return calculadora; //retornamos calculadora//
}
int main(){
    int calculadora, a, b, opc; //declarando las variables de tipo entero//
    //aqui el usuario va a seleccionar la operacion que quiera realizar segun la varialbe opc//
    cout<<"Hola, bienvenido a la progracalculadora, seleccione la opción a realizar"<<endl;
    cout<<"1. "<<endl;
    cout<<"2. "<<endl;
    cout<<"3. "<<endl;
    cout<<"4. "<<endl;
    cin>>opc; //lee el dato opc//
    cout<<"Ahora, seleccione el primer valor"<<endl;//pedimos al usuario que ingrese el primer valor(a)//
    cin>>a;//lee el dato a//
    cout<<"Ahora, seleccione el segundo valor"<<endl;//pedimos al usuario que ingrese el segundo valor(b)//
    cin>>b;//lee el dato b//
    switch (opc) //hacemos un switch segun los casos del programa de la calculadora//
    {
        //si eligio el caso 1, la operacion sera una suma//
    case 1:
        calculadora= a + b;
        cout<<"Usted selecciono la operacion suma"<<endl;
        cout<<"Y la suma es : "<<calculadora<<endl;
        break;
        //si eligio el caso 2, la operacion sera una resta//
    case 2:
    calculadora= a - b;
    cout<<"Usted selecciono la operacion resta"<<endl;
    cout<<"Y la resta es : "<<calculadora<<endl;
    break;
    //si eligio el caso 3, la operacion sera una multiplicacion//
    case 3:
    calculadora= a * b;
    cout<<"Usted selecciono la operacion multiplicacion"<<endl;
    cout<<"Y la multiplicacion es : "<<calculadora<<endl;
    break;
    //si eligio el caso 4, la operacion sera una division//
    case 4:
    calculadora= a / b;
    cout<<"Usted selecciono la operacion division"<<endl;
    cout<<"Y la division es : "<<calculadora<<endl;
    break;
    //si no ingresa uno de las opciones del programa, utilizaremos el default//
    default:
    cout<<"Usted no selecciono una de las opciones dadas, por favor ingrese una opcion valida ";
        break;
    }


    return 0;
}