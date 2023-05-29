#include <iostream>
using namespace std;
int area(int b, int h){
    int area= 0;
    area= b * h;
    return area;
}
int main(){
    int b,h,area=0;
    cout<<"Ingrese el valor para la base"<<endl;
    cin>>b;
    cout<<"Ingrese el valor para la altura"<<endl;
    cin>>h;
    area= (b * h)/2;
    cout<<"El area del triangulo es : "<<area<<endl;
    return 0;
}