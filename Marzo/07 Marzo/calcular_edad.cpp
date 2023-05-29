#include <iostream>
using namespace std;
//creamos una funcion para calcular la edad con el parametro del año de nacimiento
int calcular_edad(int año_nac){
    int edad= 0; //declaramos e inicializamos la variable
    //edad sera igual al año actual por defecto menos el año de nacimiento
    edad = 2023 - año_nac;
    return edad;
}
int main(){
    int año_nac,edad;
    //pedimos al usuario que ingrese el año 
    cout<<"Ingrese el año/n";
    cin>>año_nac;
    //la edad sera igual a la funcion que habiamos creado
    edad= 2023 - año_nac;
    if(edad<=17){
        //imprimiendo si es mayor de edad si es igual o mayor a 17
        cout<<"Usted es menor de edad"<<endl;
    } else{
        ////imprimiendo si es menor de edad si es igual o mayor a 17
        cout<<"Usted es mayor de edad"<<endl;
    }
    cout<<"Tu edad es"<<calcular_edad(año_nac)<<endl;
    return 0;
}