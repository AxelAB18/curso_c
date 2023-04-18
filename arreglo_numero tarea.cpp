#include <iostream>
using namespace std;

//creamos una funcion void para que no nos retorne nada con los parametros del arreglo y el tamaño
void numero_mayor(int arr[5], int tamanio)
{
    //declaramos el tipo de la variable mayor y lo igualamos al primer arreglo
    int mayor = arr[0]; 
    //creamos un for para que recorra desde el primero[0] hasta el ultimo[5] arreglo
    for (int i = 0; i < tamanio; i++)
    {
        //creamos la condicional para comparar si mayor es menor que el arreglo mayor
        if (mayor < arr[i])
        {
            //si es menor, entonces se cumplira que la variable mayor sera igual al arreglo mayor
            mayor = arr[i];
            ;
        }
    }
    //imprimimos el numero mayor
    cout << "el numero mayor es : " << mayor<<endl;
}

//lo mismo hacemos para hallar el numero menor
void numero_menor(int arr[5], int tamanio)
{
    int menor = arr[0];
    for (int i = 0; i < tamanio; i++)
    {
        //NOTA: solo que acá cambia el signo y si menor es "mayor" que el arreglo menor, entonces
        if (menor > arr[i])
        {
            //entonces se cumple que la variable menor sera igual al arreglo menor
            menor = arr[i];
        }
    }
    //imprimimos el numero menor
    cout << "el numero menor es : " << menor<<endl;
}

//cramos otra funcion void para que no nos retorne nada con los mismos parametros que el primer void(arr[5],tamanio)
void repeticiones(int arr[5], int tamanio)
{
    //en este ejercicio tendremos que crear un for anidado
    for (int j = 0; j < tamanio; j++)
    {
        int veces_repite = 0; //creamos una variable para saber cuantas veces se repite

        /* El i solo determinara si el arreglo de uno de ellos se repite y cuantas veces se va a repetir, es por eso que creamos
        otro for j para que pueda recorrer todo el arreglo
        */

        for (int i = 0; i < tamanio; i++)
        {
            if (arr[j] == arr[i]) //comparamos si son iguales el arreglo[j] con el arreglo[i]
            {
                veces_repite++; //la variable va a en aumento de 1 en 1
            }
        }

        //creamos in if para comparar si la variable llega a repetirse o no 
        if (veces_repite == 1) 
        {
            //se imprime si solo es ese numero y no se repite en el arreglo
            cout << "el arreglo [" << j << "] no se repite\n"<<endl;
        }
        else //si no es asi, entonces va tener repeticiones y llamamos a la funcion
        {
            cout << "el arreglo [" << j << "] tiene : " << veces_repite << " elementos\n"<<endl;
        }
    }
}

//creamos otro void para ordenar de menor a mayor, la misma funcion se hara para ordenar de mayor a menor
void menor_a_mayor(int arr[5], int tamanio)
{
    int guardar_numero = 0; //creamos una variable para que el arreglo se pueda guardar aqui

    //creamos un for anidado para poder ordenarlos
    for (int i = 0; i < tamanio; i++)
    {
        int menor = arr[i]; //aca igualamos que el menor es igual al arreglo menor

        //creamos otro for pero para la j y la j lo igualamos a i ya que seran los mismos valores
        for (int j = i; j < tamanio; j++)
        {
            //creamos una condicional para saber si menor es mayor al arreglo menor
            if (menor > arr[j])
            {
                menor = arr[j]; //si es asi, se igual el menor con el arreglo menor
                guardar_numero = arr[j]; //guardaremos el arreglo en la variable guardar_numero
                arr[j] = arr[i]; // y el arreglo[i] lo guardaremos en el arreglo[j]
                arr[i] = guardar_numero; //ahora sera igual el arr[i] con la variable
            }
        }
    }
    //imprimimos el orden
    cout << "los valores ordenados de menor a mayor son : \t"<<endl;
    for (int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << "\t"<<endl;
    }

}

//los mismos pasos haremos para ordenar de mayor a menor, solo cambia en el signo y la variable sera mayor
void mayor_a_menor(int arr[5], int tamanio)
{
    int guardar_numero = 0; //creamos la variable guardar numero para que el arreglo se pueda guardar aqui
    for (int i = 0; i < tamanio; i++)
    {
        int mayor = arr[i]; 
        for (int j = i; j < tamanio; j++)
        {
            //aca solo cambio el signo de que si la variable mayor es menor al arreglo mayor, entonces mayor sera igual al arreglo mayor
            if (mayor < arr[j])
            {
                mayor = arr[j];
                guardar_numero = arr[j];
                arr[j] = arr[i];
                arr[i] = guardar_numero;
            }
        }
    }
    //imprimimos el orden de mayor a menor
    cout << "los valores ordenados de mayor a menor son : \t"<<endl;
    for (int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << "\t"<<endl;
    }

}

//creamos una funcion suma para que nos retorne la suma del arreglo
int suma_arr(int arr[5], int tamanio)
{
    int suma = 0; //creamos la variable suma

    //creamos un for para que recorra del primer arreglo hasta el ultimo
    for (int i = 0; i < tamanio; i++)
    {
        // la suma sera igual a la suma mas el arreglo[i] 
        suma = suma + arr[i];
    }
    //retornamos suma
    return suma;
}

//tambien creamos una funcion promedio para que nos retorne el promedio del arreglo
float promedio_arr(int arr[5], int tamanio)
{
    //creamos las variables promedio y la suma
    float promedio = 0; 
    int suma=0;
    suma=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4]);
    promedio = suma / tamanio; //el promedio sera igual a la suma de los arreglos entre el tamaño del arreglo 
    //retornamos promedio
    return promedio;
}

//creamos una funcion void para que no nos retorne nada
void mediana_arr(int arr[5], int tamanio)
{
    int mediana = 0; //creamos la variable mediana

    //aca haremos para que los arreglos esten de menor a mayor para poder calcular la mediana correctamente
    int guardar_numero = 0;
    for (int i = 0; i < tamanio; i++)
    {
        int menor = arr[i];
        for (int j = i; j < tamanio; j++)
        {
            if (menor > arr[j])
            {
                menor = arr[j];
                guardar_numero = arr[j];
                arr[j] = arr[i];
                arr[i] = guardar_numero;
            }
        }
    }
    cout << "los valores ordenados de menor a mayor son : \t";
    for (int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << "\t";
    }
    //luego de haber ordenado de menor a mayor el arreglo, ahora si podemos hallar la mediana
    //la mediana es igual al arreglo[2]
    mediana = arr[2];
    //imprimimos la mediana
    cout << "La mediana del arreglo es : " << mediana<<endl;
}

int main()
{
    int arr[5], suma; //creamos el arreglo de capacidad 5
    int tamanio = sizeof(arr) / sizeof(arr[0]); //creamos el tamaño del arreglo 

    //creamos un for para que recorra el primer arreglo hasta el ultimo y pueda ingresar los valores
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Ingrese los valores del arreglo" << endl;
        cin >> arr[i];
    }

    //llamamos a las funciones

    numero_mayor(arr, tamanio);
    numero_menor(arr, tamanio);
    repeticiones(arr, tamanio);
    menor_a_mayor(arr, tamanio);
    mayor_a_menor(arr, tamanio);
    mediana_arr(arr, tamanio);
    cout << "La suma del arreglo es : " << suma_arr(arr, tamanio)<<endl;
    cout << "El promedio del arreglo es : " << promedio_arr(arr, tamanio   )<<endl;

    return 0;
}
