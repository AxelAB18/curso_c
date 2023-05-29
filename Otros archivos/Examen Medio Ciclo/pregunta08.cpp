#include <iostream>
using namespace std;

float calcular_promedio(float nota1, float nota2, float nota3 ){ //hacemos una funcion para calcular el promedio de tipo float con las notas//
    float prom; //declaramos la variable prom de tipo float
    prom=(nota1+nota2+nota3)/3; //el promedio de tres notas la hallamos sumando esas 3 notas y de la suma de esas notas, la dividimos entre 3
    return prom; //retornamos promedio//
}
int main(){
    float nota1,nota2,nota3; //declarando las variables de tipo float//
    float prom;
    cout<<"Ingrese la primera nota"<<endl;//pedimos al usuario que ingrese la primera nota//
    cin>>nota1;//lee la nota1
    cout<<"Ingrese la segunda nota"<<endl;//pedimos al usuario que ingrese la segunda nota//
    cin>>nota2; //lee la nota2
    cout<<"Ingrese la tercera nota"<<endl;//pedimos al usuario que ingrese la tercera nota//
    cin>>nota3; //lee la nota3
    prom=(nota1+nota2+nota3)/3; //el promedio de las 3 notas la hallamos sumando esas notas y dividirlo entre 3
    cout<<"El promedio de las tres notas ingresadas sera "<<prom<<endl; //imprimimos el resultado del promedio 

    return 0;
}