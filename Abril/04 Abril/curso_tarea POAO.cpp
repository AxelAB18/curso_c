//06/04/2023
//librerias
#include <string>
#include <iostream>
using namespace std;

class curso{
    private:
    string nombre_curso;
    int creditos;
    int practica1;
    int practica2;
    int trabajo_fnl;
    int examen_mc;
    int examen_fnl;
    

    //metodos y funciones
    public:
    //constructor
    curso(){

    }
    curso(string nomb_c, int crdts, int pc1, int pc2, int trabajo_f, int ex_mc, int ex_f){
        nombre_curso=nomb_c;
        creditos=crdts;
        practica1=pc1;
        practica2=pc2;
        trabajo_fnl=trabajo_f;
        examen_mc=ex_mc;
        examen_fnl=ex_f;
    }

//metodos
//getter an setter

    string getNombre_c()
    {
        return nombre_curso;
    }

    int getCreditos()
    {
        return creditos;
    }
    int getPractica1()
    {
        return practica1;
    }

    int getPractica2()
    {
        return practica2;
    }
    int getTrabajo_fl()
    {
        return trabajo_fnl;
    }
    int getExamen_mc()
    {
        return examen_mc;
    }
    int getExamen_f()
    {
        return examen_fnl;
    }

//creamos funciones

    void setNombre_c(string _nombcrs){
        nombre_curso=_nombcrs;
    }
    void setCreditos(int _cdrts){
        creditos=_cdrts;
    }
    void setPractica1(int _pc1){
        practica1=_pc1;
    }
    void setPractica2(int _pc2){
        practica2=_pc2;
    }
    void setTrabajo_fl(int _trabajof){
        trabajo_fnl=_trabajof;
    }
    void setExamen_mc(int _exmc){
        examen_mc=_exmc;
    }
    void setExamen_f(int _exf){
        examen_fnl=_exf;
    }
//creamos una funcion que imprima los datos del curso
    void imprimir(){
        cout<<"los datos del curso son:\t"<<nombre_curso<<" "<<creditos<<" "<<practica1<<" "<<practica2<<" "<<trabajo_fnl<<" "<<examen_mc<<" "<<examen_fnl;
    }

    };

    int main(){

        curso est("Programacion_Basica",4, 15,18,15,10,12);

       /* cout<<"el nombre del curso es : "<<est.getNombre();
        cout<<"los creditos del curso son : "<<est.getCreditos();
        cout<<"la practica1 del curso quivale : "<<est.getPractica1();
        cout<<"la practica2 del curso equivale : "<<est.getPractica2();
        cout<<"el trabajo final del curso equivale : "<<est.getTrabajo_fl();
        cout<<"el examen de medio ciclo del curso equivale a : "<<est.getExamen_mc();
        cout<<"el examen final del curso equivale a : "<<est.getExamen_f();
       */

cout<<"Los datos del curso son:"<<endl;
est.imprimir();

return 0;
    }