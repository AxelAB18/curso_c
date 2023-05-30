//las librerias de la clase Servicio
#include <iostream>
#include <string>
using namespace std;

class Servicio {
private:
    //atributos(características)
    string nombre_servicio;
    string descripcion;
    float precio;
    string trabajador;
    string tiempo_realizar;
    string repuestos;

public:
    // Constructor
    Servicio(string _nombre_servicio = "", string _descripcion = "", float _precio = 0.0) {
        nombre_servicio = _nombre_servicio;
        descripcion = _descripcion;
        precio = _precio;
    }
    //funcion string para concatenar el nombre del trabajador y el tiempo que se demora en realizar el servicio
    string getDatos_trabajador(){
        return "trabajador: " + trabajador + ", tiempo: " + tiempo_realizar; 
    }
    void setDatos_trabajador(string _trabajador, string _tiempo_realizar){
        trabajador=_trabajador;
        tiempo_realizar=_tiempo_realizar;
    }
    // Métodos getter and setter para cada atributo
    string getNombreServicio() {
        return nombre_servicio;
    }

    void setNombreServicio(string _nombre_servicio) {
        nombre_servicio = _nombre_servicio;
    }

    string getDescripcion() {
        return descripcion;
    }

    void setDescripcion(string _descripcion) {
        descripcion = _descripcion;
    }

    float getPrecio() {
        return precio;
    }

    void setPrecio(float _precio) {
        precio = _precio;
    }
    string getRepuesto(){
        return repuestos;
    }
    void setRepuesto(string _repuestos){
        repuestos=_repuestos;
    }
    string getTrabajador() {
    return trabajador;
    }

    void setTrabajador(string _trabajador) {
        trabajador = _trabajador;
    }

    string getTiempoRealizar() {
        return tiempo_realizar;
    }

    void setTiempoRealizar(string _tiempo) {
        tiempo_realizar = _tiempo;
    }

};