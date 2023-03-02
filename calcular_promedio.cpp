#include <iostream>
using namespace std;
double calcular_promedio(double n1,double n2,double n3);
double calcular_promedio(double n1,double n2,double n3){
    double promedio=0;
    promedio= (n1+n2+n3)/3;
    return promedio;
}
int main(){
    double n1,n2,n3;
    double promedio;
    cout<<"Ingrese la primera nota"<<endl;
    cin>>n1;
    cout<<"Ingrese la segunda nota"<<endl;
    cin>>n2;
    cout<<"Ingrese la tercera nota"<<endl;
    cin>>n3;
    promedio=(n1+n2+n3)/3;
    if (promedio>=10.5){
        cout<<"Usted està aprobado, felicitaciones¡¡"<<endl;
    }
    else{
        cout<<"Usted està desaprobado, a ponerle màs ganas"<<endl;
    }
    return 0;
}