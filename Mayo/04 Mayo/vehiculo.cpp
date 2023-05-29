/*2. Elabore un programa que implemente una clase denominada vehiculo que contenga los siguientes atributos cilindrada de motor
numero de asientos, numero de ruedas, numero de puertas, certificacion de seguridad.
implemente dos clases automoviles y motocicleta que 	hereden los atributos de vehiculo, y contengan atributos de color y marca
se desea contar con un arreglo de 10 automoviles y 5 motocicletas. implementar un metodo para imprimir un reporte con la siguiente estructura
nombre de la tienda, lista de automoviles a detalle y lista motocicletas*/
#include <iostream>
using namespace std;

class Vehiculo
{

private:
    int cilindrada_motor;
    int numero_asientos;
    int numero_ruedas;
    int numero_puertas;
    int certificacion_segur;

public:
    Vehiculo(int _cilindrada_motor=0, int _numero_asientos=0, int _numero_ruedas=0, int _numero_puertas=0, int _certificacion_segur=0){
        cilindrada_motor=_cilindrada_motor;
        numero_asientos=_numero_asientos;
        numero_ruedas=_numero_ruedas;
        numero_puertas=_numero_puertas;
        certificacion_segur=_certificacion_segur;
    }

    int getCilindradamotor(){
        return cilindrada_motor;
    }

    void setCilindradamotor(int _cilindrada_motor){
        cilindrada_motor=_cilindrada_motor;
    }

    int getNumeroasientos(){
        return numero_asientos;
    }

    void setNumeroasientos(int _numero_asientos){
        numero_asientos=_numero_asientos;
    }

    int getNumeroruedas(){
        return numero_ruedas;
    }

    void setNumeroruedas(int _numero_ruedas){
        numero_ruedas=_numero_ruedas;
    }

    int getNumeropuertas(){
        return numero_puertas;
    }

    void setNumeropuertas(int _numero_puertas){
        numero_puertas=_numero_puertas;
    }

    int getCertificacionsegu(){
        return certificacion_segur;
    }

    void setCertificacionsegu(int _certificacion_segur){
        certificacion_segur=_certificacion_segur;
    }

};

