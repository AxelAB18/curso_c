#include <iostream>
using namespace std;

int main(){
    int a[8]; //Hemos puesto un arreglo de 8 datos que nos pondra el usuario//
    int tamanio=sizeof(a)/sizeof(a[0]); //tambien hemos creado el tamanio que sera el arreglo entre el primer arreglo//
    for(int i=0; i<tamanio; i++){ //hacemos un bucle para que el usuario ingrese los valores de los arreglos//
        cout<<"Ingrese los valores del arreglo["<<i<<"]"<<endl;
        cin>>a[i]; //lee los datos del arreglo que ingreso el usuario//

    }
    //queremos saber como se ordena de menor a mayor//
    for (int i = 0; i < tamanio; i++)//hacemos que el interador comience desde 0 hasta antes del tamanio aumentando de 1 en 1//
   
    {
        //hacemos otro for para que podamos comparar con el otro interador//
        for (int j = 0; j < tamanio - 1; j++)//con este for hacemos que comience desde 0 hasta tamanio-1, en otras palabras tamanio-1(7)
         //para que no se haga el recorrido hasta el ultimo
        {
            if (a[j] > a[j + 1])//hacemos la comparacion de que a[j] sea mayor que a[j+1] si esto se cumple se ejecuta lo siguiente
            {
                int tempo = a[j];//creamos una variable tempo y le asiganamos el a[j]
                a[j] = a[j + 1]; //como el arreglo a[j] no tiene valor por el tempo, pasa al siguiente arreglo//
                a[j + 1] = tempo; // entonces el arreglo siguiente sera igual a la variable tempo
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de menor a mayor es: "; 

    for (int i = 0; i < tamanio; i++)
    {
        cout << a[i] << " "; //imprimemos el arreglo de los datos de menor a mayor
    }
//ahora hacemos de mayor a menor
    for (int i = 0; i < tamanio; i++) //creamos un primer interador que inicia en 0, es menor que el tamanio y va aumentando de 1 en 1
    {
        for (int j = 0; j < tamanio - 1; j++) //creamos otro interador que inicie en 0, es menor a tamanio y tambien aumenta de 1 en 1
        {
            if (a[j] < a[j + 1]) //comparamos ssi a[j] es menor que a[j+1], si es asi entonces //
            {
                int tempo = a[j]; //creamos una variable tempo y lo igualamos a a[j]//
                a[j] = a[j + 1]; //como el arreglo no tiene valor por el tempo, pasa a su siguiente arreglo//
                a[j + 1] = tempo; // entonces el arreglo siguiente sera igual a tempo
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < tamanio; i++)
    {
        cout << a[i] << " "; // imprimimos los datos del arreglo de mayor a menor
    }
    return 0;
}