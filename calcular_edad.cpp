#include <iostream>
using namespace std;
int calcular_edad(int año_nac);
int calcular_edad(int año_nac){
    int edad= 0;
    edad = 2023 - año_nac;
    return edad;
}
int main(){
    int año,edad;
    cout<<"Ingrese el año/n";
    cin>>año;
    edad=calcular_edad(edad);
    if(edad<=17){
        cout<<"Usted es menor de edad"<<endl;
    } else{
        cout<<"Usted es mayor de edad"<<endl;
    }
    cout<<"Tu edad es"<<endl;
    return 0;
}