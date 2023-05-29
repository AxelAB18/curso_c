//21/03/2023
//declarar un arreglo de 5 productos, reemplazar el producto de la posicion 2 por computadora e imprimir el arreglo

#include <iostream>
using namespace std;

int main()
{
    //1. declaramos el tipo de arreglo de productos
    string productos[]={"leche","detergente","escoba","recogedor","atun"};
    //quiero imprimir por ejemplo el producto[3]
    cout<<productos[3]<<endl;

    //2. reemplazamos el producto de la posicion 2 por computadora e imprimimos para ver si funciono
    productos[2]="computadora";
    cout<<productos[2]<<endl;
    
    //3. creamos un for para que el arreglo corra desde cero para imprimir todo el arreglo

    int tamaño=sizeof(productos)/sizeof(productos[0]);

    for (int i = 0; i <tamaño; i++)
    {
        cout<<"El valor del vector["<<i<<"] es : "<<productos[i]<<endl;
    }
    
}