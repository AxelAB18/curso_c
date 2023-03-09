#include <iostream>
using namespace std;

int prom(int n1,int n2,int n3);
int prom(int n1,int n2,int n3){
    int prom=0;
    prom = (n1+n2+n3)/3;
    return prom;
}
int notas(int calificacion);
int notas(int calificacion){
    int nota=0;
    if(calificacion>=18){
        nota=1;
    }else{
        if(calificacion>=15){
            nota=2;
    }else{
        if(calificacion>=11){
            nota=3;
    }else{
        if(calificacion>=5){
            nota=4;
    }else{
        nota=5;
    }
    }
    }
    }
    return nota;

}
int main(){
    int nota;
    int div;
    int n1,n2,n3;
    cout<<"Ingrese sus notas"<<endl;
    cin>>n1>>n2>>n3;
    div=prom(n1,n2,n3);
    nota =notas(div);
    cout<<"tu nota es ";
    switch(nota){
        case 1:
        cout<<"A";
        break;
        case 2:
        cout<<"B";
        break;
        case 3:
        cout<<"C";
        break;
        case 4:
        cout<<"D";
        break;
        case 5:
        cout<<"E";
        break;
        default:
        cout<<"Usted no tiene nota o no se presento";
        break;
    }
    return 0;
}