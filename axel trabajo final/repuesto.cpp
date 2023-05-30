#include <iostream>
#include <string>

using namespace std;

class RepuestoMoto {
private:
    string marca_repuesto;
    float precio_repuesto;
    int cantidad_repuesto;
    string fecha_registro_repuesto;

public:
    // Constructor
    RepuestoMoto(string _marca_repuesto = "", float _precio_repuesto = 0.0, int _cantidad_repuesto = 0, string _fecha_registro_repuesto = "") {
        marca_repuesto = _marca_repuesto;
        precio_repuesto = _precio_repuesto;
        cantidad_repuesto = _cantidad_repuesto;
        fecha_registro_repuesto = _fecha_registro_repuesto;
    }
    string datos_repuesto(){
        return "marca: " + marca_repuesto + ", precio: " + to_string(precio_repuesto) + ", cantidad: " + to_string(cantidad_repuesto) + ", fecha de registro: " + fecha_registro_repuesto;
    }
    // Métodos para acceder y modificar los atributos
    string getMarcaRepuesto() {
        return marca_repuesto;
    }

    void setMarcaRepuesto(string _marca_repuesto) {
        marca_repuesto = _marca_repuesto;
    }

    float getPrecioRepuesto() {
        return precio_repuesto;
    }

    void setPrecioRepuesto(float _precio_repuesto) {
        precio_repuesto = _precio_repuesto;
    }

    int getCantidadRepuesto(){
        return cantidad_repuesto;
    }

    void setCantidadRepuesto(int _cantidad_repuesto) {
        cantidad_repuesto = _cantidad_repuesto;
    }

    string getFechaRegistroRepuesto() {
        return fecha_registro_repuesto;
    }

    void setFechaRegistroRepuesto(string _fecha_registro_repuesto) {
        fecha_registro_repuesto = _fecha_registro_repuesto;
    }
};