#include <iostream>
using namespace std;

int main(){
    //declaramos el tipo del arreglo y pondremos los precios del producto, yo me he basado del ejercicio 1, una aproximacion de los precios
    //creamos tambien el tamaño para saber el tamaño maximo y el tamaño maximmo del indice
    string productos[]={"leche","detergente","escoba","recogedor","atun"};
    float precio_productos[5]={3.5, 45.50, 1799.99, 10.0, 4.5 };
    int tamanio= sizeof(precio_productos)/sizeof(precio_productos[0]);

    /*ahora vamos a imprimir el arreglo, pero antes creamos un for para que corra desde el primer arreglo hasta el ultimo,
    por ultimo, le pedimos que nos imprima todo el arreglo
    */
    for (int i = 0; i<5; i++)
    {
        //imprimimos todo el arreglo
        cout<<"El precio del producto "<<productos[i]<<"="<<precio_productos[i]<<endl;
    }
    
    //creamos una variable de valor maximo tipo float, para calcular el valor maximo del precio
    float valor_max;

    //para ello creamos un for que recorra desde el precio[0] hasta el precio[4] para poder compararlo con la variable 
    for (int i = 0; i<5; i++)
    {
        //utilizamos una condicional para comparar si el valor maximo es mayor al precio de los productos
        if (valor_max>precio_productos[i])
        {
            //si es asi, se cumplira la siguiente sentencia, el valor maximo seguira siendo el mismo(no cambia)
            valor_max=valor_max;
            
        }
        else
        {
            //de lo contrario el valor maximo sera igual al precio mas alto de los productos
            valor_max=precio_productos[i];
            
        }
    }

    //imprimimos el valor maximo del precio, tamaño maximo y tamaño maximo del indice del arreglo
    cout<<"El valor maximo del precio es "<<valor_max<<endl;
    cout<<"El tamaño maximo del precio_productos es : "<<tamanio<<endl;
    cout<<"El tamaño maximo del indice del precio_productos es : "<<tamanio-1<<endl;

    return 0;
}