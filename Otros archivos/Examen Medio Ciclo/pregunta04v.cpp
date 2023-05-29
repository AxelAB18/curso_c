#include <iostream>
using namespace std;

int main(){
    int a[10]; //Hacemos un arreglo de 10 datos que nos dara el usuario//
    int tamanio=sizeof(a)/sizeof(a[0]); //creamos el tamanio del arreglo//
    for (int i = 0; i < tamanio; i++) //hacemos un for para que el usuario ingrese los datos de acuerdo a la capaccidad del arreglo
    {
        cout<<"Ingrese los a["<<i<<"]"<<endl;
        cin>>a[i]; //lee los datos del arreglo//
    }
     int menor = a[0];                 // asigamos la variable menor como a[0]
    for (int i = 1; i < tamanio; i++) // ponemos que el for comience en 1 porque el 0 ya lo tenemos asignado y es el menor
    {
        if (a[i] < menor) //comparamos si el arreglo[i] sera "menor" que la variable menor, si esto se cumple, se da el caso de que//
        {
            menor = a[i]; //la variable menor sea igual al arreglo[i], si y solo si el a[i] es menor
        }
    }
    //hacemos lo mismo para el numero mayor//
    int mayor = a[0]; //la variable mayor lo igualamos al arreglo 0//
    for (int i=1; i < tamanio; i++){ //hacemos el for del interador que empezara del 1 porque el o ya esta asigando, que sea menor que el tamanio y que aumente de 1 en 1//
        if (a[i]>mayor) //si el a[i] es "mayor" que la variable mayor, entonces sucedera lo siguiente
        {
            mayor= a[i]; // la variable mayor sera igual al a[i] si y solo si el a[i] es mayor
        }
        
    }
    for (int i = 0; i < tamanio - 1; i++)//hacemos que comienze desde 0 hasta tamanio -1 
    //para que no se haga el recorrido hasta el ultimo
    {
        for (int j = i + 1; j < tamanio; j++)//con este for hacemos que comienze de i+1 osea de tamanio para que se haga
        //el recorrido hasta el ultimo 
        {
            if (a[i] == a[j])//con este if hacemos la comparacion si el a[i] es igual que a[j]
            {
                cout << a[i] << " ";//si se cumple el if se escribe el valor a[i] que se repite
                break;// esto es para que finalice el bucle
            }
        }
    }
cout<<"El numero menor es : "<<menor<<endl;
cout<<"El numero mayor es : "<<mayor<<endl;

int suma; //declaramos la variable suma de tipo entera
for(int i= 0; i<tamanio; i++){ //creamos un interador que incie en 0, sea menor que el tamanio y aumente de 1 en 1// 
    suma= suma + a[i]; //la suma sera igual a la suma de los arreglos
}
cout<<"La suma sera : "<<suma<<endl;//el resultado de la suma de los arreglos


float prom; //declaramos la variable prom de tipo float
prom= suma / tamanio; //prom sera igual a la suma entre el tamanio(10)//
cout<<"El promedio de los 10 items sera : "<<prom<<endl;

//ahora calculamos la mediana, pero primero debemos ordenar los datos de menor a mayor// igual como el ejercicio 3
for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }

    //int mediana;
    //int mediana2;
    int mediana; //declaramos la mediana de tipo entero

    //if (tamanio % 2 == 0)
    //{
    //   int i = tamanio / 2;
    //  mediana = i - 1;
    //mediana2 = i;
    //   cout << endl  << "la mediana es " << a[mediana] << " ;" << a[mediana2];
    //}
    //else{
        mediana = (tamanio - 1) / 2;//se hara si y solo si es impar la mediana
        cout << endl
             << "La mediana es: " << a[mediana];





return 0;
}





















