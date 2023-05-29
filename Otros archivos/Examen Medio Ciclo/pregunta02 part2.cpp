#include <iostream>
using namespace std;
int perimetro(int l1, int l2, int l3){ //Hacemos una funcion que nos permita hallar el perimetro con los parametros l1, l2 y l3//
    int perimetro=0;  //inicializando la variable perimetro
    perimetro= l1+ l2+ l3; //el perimetro va ser igual a la suma de los lados l1, l2 y l3//
    return perimetro; //retornamos perimetro
}
int main(){
    int perimetro, l1, l2, l3;
    cout<<"Ingresar el valor del primer lado"<<endl; //pedimos al usuario que nos ingrese el primer lado(l1)//
    cin>>l1; //lee el dato l1
    cout<<"Ingresar el valor del segundo lado"<<endl; //pedimos al usuario que nos ingrese el primer lado(l2)//
    cin>>l2; //lee el dato l2
    cout<<"Ingresar el valor del tercer lado"<<endl; //pedimos al usuario que nos ingrese el primer lado(l3)//
    cin>>l3; //lee el dato l3
    perimetro= l1 + l2+ l3; 
    cout<<"El perimetro es : "<<perimetro<<endl; //imprimiendo el resultado del perimetro
    return 0;
}