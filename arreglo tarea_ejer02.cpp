#include <iostream>
using namespace std;

int main(){
    /*creamos un for para que i cuente desde 0 hasta 5 para que cuando le pidamos al usuario que ingrese los libros,
      el usuario pueda ingresar como maximo 5 libros
    */
   //declaramos el tipo del arreglo
    string libros[5];
    for (int i = 0; i<5; i++)
    {
        cout<<"Escribe sus 5 libros favoritos"<<endl;
        cin>>libros[i];
    }
//creamos un for mas para que nos imprima desde el primer libro hasta el ultimo libro que ingreso el usuario
   for (int i = 0; i < 5 ;++i)
    {
        //imprimimos los libros que el usuario ingreso
        cout<<"El libro["<<i<<"] es : "<<libros[i];
    }
    
    return 0;
}