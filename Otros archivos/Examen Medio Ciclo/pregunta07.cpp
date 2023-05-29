#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    stack<int>pila;
    queue<int>cola;

    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);
    pila.push(6);
    pila.push(7);
    pila.push(8);
    pila.push(9);
    pila.push(10);

    int tempo;
    while (!pila.empty())
    {
        tempo=pila.top();
        pila.pop();
        cola.push(tempo);
    }
    while (!cola.empty())
    {
        cout<<cola.front();
        cola.pop();
    }
    
    return 0;
}

//La estrategia de las pilas es que utiliza las propiedades LIFO que es el primero que ingresa, pero el ultimo en salir//
//La estrategia de las colas es que utiliza las propiedades FIFO que es el primero que ingresa, pero tambien es el primero en salir//