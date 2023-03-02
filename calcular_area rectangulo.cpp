#include <iostream>
using namespace std;
int calcular_area(int b,int h);
int calcular_area(int b,int h){
    int area=0;
    area=b*h;
    return area;
}
int main(){
    int b, h;
    int area;
    cout<<"Ingrese la cantidad que desea tomar la base"<<endl;
    cin>>b;
    cout<<"Ingrese la cantidad que desea tomar la altura"<<endl;
    cin>>h;

    area=b*h;
    cout<<"El àrea del rectàngulo serà: "<<area;
    return 0;
}