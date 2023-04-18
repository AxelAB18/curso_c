#include <iostream>
#include <stack> // incluimos la libreria para pila
#include <queue> // incluimos la libreria para cola

using namespace std;

int main(){
    stack<int> mi_pila;
    queue<int> mi_cola;
    int numero=0; //declaramos e inicializamos la variable num(numero)

    //creamos un for para la pila
    for(int i=0;i<5;i++){

        //como el numero comienza desde 0, ahora aumentara de 1 en 1
        numero++;

        /*entonces se ingresan los valores del numero a la pila, recordar que el primer valor que ingrese será el ultimo,
        y el ultimo valor que se ingrese sera el primero
        */ 
        mi_pila.push(numero);
    }

    //ahora creamos un for para la cola
    for(int i=0;i<5;i++){

        //como sabemos que el numero aumento en 5 en la pila, en este caso, en la cola aumentara hasta el 10 porque aumenta de 1 a 1
        numero++;

        /*entonces se ingresan los valores del numero a la cola, recordar que el primer valor que ingrese será el primero,
        y el ultimo valor que se ingrese sera el ultimo
        */ 
        mi_cola.push(numero);
    }

    for(int i=0;i<5;i++){
        cout<<"el primer valor de mi pila es : "<<mi_pila.top()<<"\n"; //cuando dice top se refiere al numero que esta en la cima de la pila
        mi_cola.push(mi_pila.top()); //se ingresa los numeros de la cima hasta el que esta en el ultimo de la pila a la cola
        mi_pila.pop(); //se van eliminando los numeros de la pila
    }
    for(int i=0;i<5;i++){
        cout<<"el primer valor de mi cola es : "<<mi_cola.front()<<"\n"; //cuando dice top se refiere al primer numero de la cola
        mi_pila.push(mi_cola.front()); //se ingresa los numeros del primero hasta el ultimo de la cola a la pila
        mi_cola.pop(); //se van eliminando los numeros de la cola
    }
    for(int i=0;i<5;i++){
        cout<<"el primer valor de mi pila es : "<<mi_pila.top()<<"\n"; 
        mi_pila.pop();
    }
    for(int i=0;i<5;i++){
        cout<<"el primer valor de mi cola es : "<<mi_cola.front()<<"\n";
        mi_cola.pop();
    }
    return 0;
}
