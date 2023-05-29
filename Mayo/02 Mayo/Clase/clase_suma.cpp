#include <iostream>
using namespace std;

class Suma
{
    private:
    int A;
    int B;

    public:
    Suma s(int _A, int _B){
        A = _A;
        B = _B;
    }

    int getA(){
        return A;
    }

    void setA(int _A){
        A = _A;
    }

    int getB(){
        return B;
    }

    void setB(int _B){
        B = _B;
    }

    int sumarvalor(int A, int B){
        int suma = A + B;
        return suma;
    }
    void imprimir(){
        cout<<"La suma es : "<< sumarvalor(A,B);
    }

};
