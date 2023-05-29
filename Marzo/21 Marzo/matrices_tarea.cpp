//30/03/2023
#include <iostream>
using namespace std;

// creamos la funcion para mostrar la matriz en pantalla
void mostrar_matriz(int numeros[10][10], int filas, int columnas)
{
    // creamos la matriz original haciendo los for anidados de i(filas) y j(columnas)
    cout << "Matriz original " << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j] << "\t";
        }
        cout << "\n";
    }
}

// creamos la funcion para mostrar la matriz inversa o transpuesta
void matriz_inversa(int numeros[10][10], int filas, int columnas)
{
    // creamos la matriz inversa haciendo los for anidados de i(filas) y j(columnas)
    cout << "MATRIZ INVERSA" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            // aca sera el unico cambio que haremos para que la matriz original se convierta en una matriz inversa
            /*
            imprimiremos ahora la columna y luego la fila
            */
            cout << numeros[j][i] << "\t";
        }
        cout << "\n";
    }
}

// * * * para calcular la suma de toda la matriz
void suma_matriz(int numeros[10][10], int filas, int columnas)
{
    // creamos la variable suma de matriz de tipo entero y lo inicializamos
    int suma_mat = 0;

    // creamos el for para recorrer las filas y otro for para las columnas
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            // la suma de la matriz sera igual a la suma de la matriz mas la matriz de las filas y columnas almacenadas
            suma_mat = numeros[i][j] + suma_mat;
        }
    }
    cout << "La suma total de la matriz es : " << suma_mat << endl;
}

// * * * para calcular la suma de las filas
void suma_de_filas(int numeros[10][10], int filas, int columnas)
{
    // creamos la variable suma de filas de tipo entero
    int suma_filas;
    for (int i = 0; i < filas; i++)
    {
        // aca lo incializamos la variable porque despues de que recorra la columna, solo nos importara la suma de las filas
        int suma_filas = 0;
        for (int j = 0; j < columnas; j++)
        {
            // la suma de las filas sera igual a la suma de las filas(0) mas la matriz de las filas y las columnas
            suma_filas = suma_filas + numeros[i][j];
        }
        cout << "La suma de la fila[" << i << "] es :" << suma_filas << endl;
    }
}

// * * * para calcular la suma de las columnas
void suma_de_columnas(int numeros[10][10], int filas, int columnas)
{
    // creamos la variable suma de columnas de tipo entero
    int suma_columnas;
    for (int j = 0; j < columnas; j++)
    {
        // aca lo incializamos la variable porque despues de que recorra la fila, solo nos importara que recorra la columna
        int suma_columnas = 0;
        for (int i = 0; i < filas; i++)
        {
            // la suma de las columnas sera igual a la suma de las columnas(0) mas la matriz de las filas y las columnas
            suma_columnas = suma_columnas + numeros[i][j];
        }
        cout << "La suma de las columnas[" << j << "] es :" << suma_columnas << endl;
    }
}

// * * * para calcular el valor maximo
int valor_maximo(int numeros[10][10], int filas, int columnas)
{
    // creamos la variable de valor maximo donde sera igual al primer numero de la matriz
    int valor_max = numeros[0][0];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            // creamos una condicional para comparar si el valor maximo es menor al mayor valor de la matriz, si es asi, se cumple que
            if (valor_max < numeros[i][j])
            {
                // se cumple que el valor maximo ahora sera igual al mayor valor de la matriz
                valor_max = numeros[i][j];
            }
        }
    }
    return valor_max;
}

// * * * para calcular el valor minimo ahora
int valor_minimo(int numeros[10][10], int filas, int columnas)
{
    // creamos la variable de valor minimo donde sera igual al primer numero de la matriz
    int valor_min = numeros[0][0];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            // creamos una condicional para comparar si el valor minimo es mayor al mayor valor de la matriz, si es asi, se cumple que
            if (valor_min > numeros[i][j])
            {
                // se cumple que el valor minimo ahora sera igual al menor valor de la matriz
                valor_min = numeros[i][j];
            }
        }
    }
    return valor_min;
}

// * * * para calcular el promedio de la matriz
void promedio_matriz(int numeros[10][10], int filas, int columnas)
{
    // creamos 2 variables, suma de matriz y el tamaño
    /*
    -La variable suma de matriz lo inicializamos y la variable promedio de la matriz sera igual al producto de filas y columnas
    */
    int suma_matriz = 0;
    int tamanio = filas * columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            // la suma de la matriz sera igual a la suma de la matriz mas la matriz de las filas y columnas almacenadas
            suma_matriz = suma_matriz + numeros[i][j];
        }
    }
    // calculamos el promedio y el promedio sera igual a la suma de la matriz entre el tamaño
    float promedio = suma_matriz / tamanio;
    cout << "PROMEDIO DE LAS MATRIZ: " << promedio << endl;
}

// * * * para calcular el promedio de las filas
void promedio_de_filas(int numeros[10][10], int filas, int columnas)
{
    // creamos 3 variables, promedio de filas, suma de filas y el tamaño
    /*
    -El tamaño sera igual a la cantidad de las filas
    */
    int promedio_filas;
    int suma_filas;
    int tamanio = filas;
    for (int i = 0; i < filas; i++)
    {
        // aca lo incializamos la variable porque despues de que recorra la columna, solo nos importara la suma de las filas
        int suma_filas = 0;
        for (int j = 0; j < columnas; j++)
        {
            // la suma de las filas sera igual a la suma de las filas(0) mas la matriz de las filas y las columnas
            suma_filas = suma_filas + numeros[i][j];
        }
        // y el promedio de las filas se hallara dividiendo la suma de filas entre el tamaño
        promedio_filas = suma_filas / tamanio;
        cout << "El promedio de la fila[" << i << "] es : " << promedio_filas << endl;
    }
}

// * * * para calcular el promedio de las columnas
void promedio_de_columnas(int numeros[10][10], int filas, int columnas)
{
    // creamos 3 variables, promedio de columnas, suma de columnas y el tamaño
    /*
    -El tamaño sera igual a la cantidad de las columnas
    */
    int promedio_columnas;
    int suma_columnas;
    int tamanio = columnas;
    for (int j = 0; j < columnas; j++)
    {
        // aca lo incializamos la variable porque despues de que recorra la fila, solo nos importara que recorra la columna
        int suma_columnas = 0;
        for (int i = 0; i < filas; i++)
        {
            // la suma de las columnas sera igual a la suma de las columnas(0) mas la matriz de las filas y las columnas
            suma_columnas = suma_columnas + numeros[i][j];
        }
        // y el promedio de las columnas se hallara dividiendo la suma de columnas entre el tamaño
        promedio_columnas = suma_columnas / tamanio;
        cout << "El promedio de las columna[" << j << "] es : " << promedio_columnas << endl;
    }
}

int main()
{
    // creamos la matriz, las variables filas y columnas de tipo entero
    int numeros[10][10], filas, columnas;

    // hacemos que el usuario ingrese el numero de filas y de columnas
    cout << "Digite el numero de las filas " << endl;
    cin >> filas;
    cout << "Digite el numero de las columnas " << endl;
    cin >> columnas;

    // hacemos el uso del for para que recorra la matriz desde la primera posicion hasta la ultima
    /*
    NOTA: El i se va a utilizar para las filas y la j sera para las columnas
    */
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            // aca el usuario ingresara los datos para almacenar los datos de la matriz
            cout << "Digite los numeros[" << i << "][" << j << "] " << endl;
            cin >> numeros[i][j];
        }
    }

    // llamamos a las funciones
    mostrar_matriz(numeros, filas, columnas);
    matriz_inversa(numeros, filas, columnas);
    suma_matriz(numeros, filas, columnas);
    cout << "Valor maximo: " << valor_maximo(numeros, filas, columnas) << endl;
    cout << "Valor minimo: " << valor_minimo(numeros, filas, columnas) << endl;
    promedio_matriz(numeros, filas, columnas);
    suma_de_filas(numeros, filas, columnas);
    suma_de_columnas(numeros, filas, columnas);
    promedio_de_filas(numeros, filas, columnas);
    promedio_de_columnas(numeros, filas, columnas);
    return 0;
}