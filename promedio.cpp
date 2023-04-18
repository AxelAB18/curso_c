#include <iostream>
using namespace std;

//hacemos la  funcion para calcular promedio con los parametros indicados
float calcular_promedio(float nota1, float nota2, float nota3) 
{
    float prom=0;
    //el promedio es igual a la suma de las notas entre 3
    prom= (nota1+nota2+nota3)/3;
    //retornamos promedio
    return prom;
}

int main()
{
    //declaramos el tipo de las variables
    float nota1, nota2, nota3;
    //pedimos al usuario que ingresen las notas que él quiera 
    cout<<"Ingrese la nota1"<<endl;
    cin>>nota1;
    cout<<"Ingrese la nota2"<<endl;
    cin>>nota2;
    cout<<"Ingrese la nota3"<<endl;
    cin>>nota3;

    //imprimimos el resultado del promedio
    cout<<"el promedio sera : "<<calcular_promedio(nota1,nota2,nota3)<<endl;
    return 0;
}