#include <iostream>
#include <string>

using namespace std;

class Cliente {
private:
    //atributos
    string nombre_cliente;
    string compras[5];
    string fecha_compra[5];

public:
    // Constructor
    Cliente(string _nombre_cliente="") {
        nombre_cliente = _nombre_cliente;
    }
    // funcion para concatenar el nombre del cliente, la compra y la fecha de la compra
    string datos_stock(int numero_compra){
        return "nombre : "+ nombre_cliente + ", compra : " + compras[numero_compra] + ", fecha_compra : " + fecha_compra[numero_compra];
    }
    // Métodos getter and setter para cada atributo
    string getNombreCliente() {
        return nombre_cliente;
    }

    void setNombreCliente(string _nombre_cliente) {
        nombre_cliente = _nombre_cliente;
    }

    string getCompras(int numero_compra) {
        return compras[numero_compra];
    }

    void setCompras(string _compras,int numero_compra) { 
        compras[numero_compra] = _compras;
    }

    string getFechaCompra(int numero_fecha_compra) {
        return fecha_compra[numero_fecha_compra];
    }

    void setFechaCompra(string _fecha_compra, int numero_fecha_compra) {
        fecha_compra[numero_fecha_compra] = _fecha_compra;
    }
};