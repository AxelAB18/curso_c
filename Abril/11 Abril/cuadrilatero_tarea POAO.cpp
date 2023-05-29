//11/04/2023
#include <iostream>
#include <Math.h>
#include <cmath>
using namespace std;

// crear clase
class Cuadrilatero
{
    // atributos
private:
    float base;
    float altura;

    // constructores y metodos
    // constructor
public:
    Cuadrilatero(float _base, float _altura)
    {
        base = _base;
        altura = _altura;
    }

    // metodos
    // getter and setter
    int getBase()
    {
        return base;
    }
    void setBase(float _base)
    {
        base = _base;
    }

    int getAltura()
    {
        return altura;
    }
    void setAltura(float _altura)
    {
        altura = _altura;
    }

    // crear funciones

    float perimetro(){
      float perimetro = (base * 2) + (altura * 2);
      return perimetro;
    }

    float area(){
      float area = base * altura;
      return area;
    }

    void tipoCuadrilatero()
    {
        // base, altura
        // es un rectangulo =====> cuando la base y la altura no son iguales
        if (base != altura)
        {
            cout << "el cuadrilatero es un cuadrado";
        }
    }
};
    int main()
    {
        Cuadrilatero cuadrilatero_1(5, 4);
        Cuadrilatero cuadrilatero_2(14, 15);
        Cuadrilatero cuadrilatero_3(10, 13);

        // pregunta 1 (modificamos la base y la altura de los cuadrilateros)

        cuadrilatero_1.setBase(20);
        cuadrilatero_1.setAltura(3);
        cuadrilatero_2.setBase(6);
        cuadrilatero_2.setAltura(8);

        // pregunta 2 (suma de lados de cada cuadrilatero y la suma total)

        cout << "La suma de los  lados del rectangulo1 es :" << cuadrilatero_1.perimetro()<<endl;
        cout << "La suma de los  lados del rectangulo2 es :" << cuadrilatero_2.perimetro()<<endl;
        cout << "La suma de los  lados del rectangulo3 es :" << cuadrilatero_3.perimetro()<<endl;
        cout << "La suma de todos los lados del rectangulo  es :" << cuadrilatero_1.perimetro()+cuadrilatero_2.perimetro()+cuadrilatero_3.perimetro()<<endl;

        // pregunta 3 (calcular area  y el perimetro de cada objeto)

        //calcular area de cada objeto

        cout<<"El area del rectangulo1 es :"<<cuadrilatero_1.area()<<endl;
        cout<<"El area del rectangulo2 es :"<<cuadrilatero_2.area()<<endl;
        cout<<"El area del rectangulo3 es :"<<cuadrilatero_3.area()<<endl;

        //calcular perimetro de cada objeto

        cout << "El perimetro del rectangulo1 es :" << cuadrilatero_1.perimetro()<<endl;
        cout << "El perimetro del rectangulo2 es :" << cuadrilatero_2.perimetro()<<endl;
        cout << "El perimetro del rectangulo3 es :" << cuadrilatero_3.perimetro()<<endl;

        // pregunta 4 (calcular la sumatoria de las areas)

        cout << "la suma de todas las areas de los rectangulos es : " <<cuadrilatero_1.area() + cuadrilatero_2.area() + cuadrilatero_3.area()<<endl;

        // pregunta 5 (calcular la sumatoria de los perimetros)

        cout << "La suma de todos los perimetros de los rectangulos es :" << cuadrilatero_1.perimetro()+cuadrilatero_2.perimetro()+cuadrilatero_3.perimetro()<<endl;

        cuadrilatero_1.tipoCuadrilatero();

        return 0;
    }