#include <iostream>
#include <string>

using namespace std;

class Empleado {
private:
    string nombre_empleado;
    string servicio[5];
    int tiempo_realizacion[5];

public:
    // Constructor
    Empleado(string _nombre_empleado = "") {
        nombre_empleado = _nombre_empleado;
    }

    // Métodos para acceder y modificar los atributos
    string getNombreEmpleado() {
        return nombre_empleado;
    }

    void setNombreEmpleado(string _nombre_empleado) {
        nombre_empleado = _nombre_empleado;
    }

    string getServicioEmpleado(int numero_servicio) {
        return servicio[numero_servicio];
    }

    void setServicioEmpleado(string _servicio, int numero_servicio) {
        servicio[numero_servicio] = _servicio;
    }

    int getTiempoRealizacion(int numero_tiempo) {
        return tiempo_realizacion[numero_tiempo];
    }

    void setTiempoRealizacion(int _tiempo, int numero_tiempo) {
        tiempo_realizacion[numero_tiempo] = _tiempo;
    }
};
