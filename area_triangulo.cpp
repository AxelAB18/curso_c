#include <iostream>
using namespace std;

//hacemos una funcion para calcular el area del triangulo con los parametros(b,h)
float calcular_area(float b,  float h)
{
    float area= 0;
    //el area sera igual a la  (base * altura) entre 2
    area= (b * h)/2;
    //retornamos el area
    return area;
}

int main()
{
    //declaramos el  tipo de las variablles
    float b, h;
    //pedimos al usuario que ingrese la base y la altura
    cout<<"Ingrese la base del triangulo"<<endl;
    cin>>b;
    cout<<"Ingrese la altura del triangulo"<<endl;
    cin>>h;

    //imprimimos el area del triangulo
    cout<<"El area del triangulo sera : "<<calcular_area(b,h)<<endl;
    return 0;
}