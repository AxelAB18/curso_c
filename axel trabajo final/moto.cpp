#include <iostream>
#include <string>

using namespace std;

class Moto {
private:
    string marca_moto;
    string modelo_moto;
    string color;
    int cantidad_moto;
    string fecha_registro_moto;
    float precio_moto;

public:
    // Constructor
    Moto(string _marca_moto = "", string _modelo_moto = "", string _color = "", int _cantidad_moto = 0, string _fecha_registro_moto = "", float _precio_moto = 0.0f) {
        marca_moto = _marca_moto;
        modelo_moto = _modelo_moto;
        color = _color;
        cantidad_moto = _cantidad_moto;
        fecha_registro_moto = _fecha_registro_moto;
        precio_moto = _precio_moto;
    }

    string cadena_datos(){
        return "marca: " + marca_moto + ", modelo: " + modelo_moto + ", color: " + color + ", cantidad: " + to_string(cantidad_moto) + ", fecha de registro: " + fecha_registro_moto + ", precio: " + to_string(precio_moto);
    }
    // Métodos para acceder y modificar los atributos
    string getMarcMoto() {
        return marca_moto;
    }

    void setMarcaMoto(string _marca_moto) {
        marca_moto = _marca_moto;
    }

    string getModeloMoto() {
        return modelo_moto;
    }

    void setModeloMoto(string _modelo_moto) {
        modelo_moto = _modelo_moto;
    }

    string getColor() {
        return color;
    }

    void setColor(string _color) {
        color = _color;
    }

    int getCantidadMoto() {
        return cantidad_moto;
    }

    void setCantidadMoto(int _cantidad_moto) {
        cantidad_moto = _cantidad_moto;
    }

    string getFechaRegistroMoto() {
        return fecha_registro_moto;
    }

    void setFechaRegistroMoto(string _fecha_registro_moto) {
        fecha_registro_moto = _fecha_registro_moto;
    }

    float getPrecioMoto() {
        return precio_moto;
    }

    void setPrecioMoto(float _precio_moto) {
        precio_moto = _precio_moto;
    }
};