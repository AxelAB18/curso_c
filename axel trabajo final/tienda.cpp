//librerias para la clase Tienda
#include <iostream>
#include <string>
//llamamos a las clases que serán clases amigas
#include "servicios.cpp"
#include "moto.cpp"
#include "cliente.cpp"
#include "empleado.cpp"
#include "repuesto.cpp"

using namespace std;

class Tienda {
private:
    //atributos
    string nombre;
    Servicio servicios[5];
    RepuestoMoto repuestos[5];
    Moto motos[5];
    Cliente clientes[5];
    Empleado empleados[5];
public:
    //constructor
    Tienda(string _nombre=""){
        nombre=_nombre;
    }
    //funcion para colocar las fechas de compra del cliente
    void completar_clientes(){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                clientes[i].setCompras(motos[j].cadena_datos(),j);
            }
        }
        clientes[0].setFechaCompra("24/03/2010",0);
        clientes[1].setFechaCompra("17/09/2014",1);
        clientes[2].setFechaCompra("08/10/2008",2);
        clientes[3].setFechaCompra("22/08/2012",3);
        clientes[4].setFechaCompra("03/05/2022",4);
    }
    //funcion para colocar los servicios a cada empleado(trabajador)
    void completar_Servicios(){
        for(int i=0;i<5;i++){
            servicios[i].setRepuesto(repuestos[i].datos_repuesto());
        }
        servicios[0].setDatos_trabajador(empleados[0].getNombreEmpleado(),"2 horas y 12 minutos");
        servicios[1].setDatos_trabajador(empleados[1].getNombreEmpleado(),"3 horas y 8 minutos");
        servicios[2].setDatos_trabajador(empleados[2].getNombreEmpleado(),"1 horas y 40 minutos");
        servicios[3].setDatos_trabajador(empleados[3].getNombreEmpleado(),"2 horas y 20 minutos");
        servicios[4].setDatos_trabajador(empleados[4].getNombreEmpleado(),"5 horas y 10 minutos");
    }
    void inicializar_clases(){
        // Inicializar 5 objetos de la clase Servicio
        Servicio servicio1("Cambio de aceite", "Realización del cambio de aceite del motor", 50.0f);
        Servicio servicio2("Alineación y balanceo", "Ajuste de la alineación y balanceo de las ruedas", 100.0f);
        Servicio servicio3("Limpieza de carburador", "Limpieza del carburador de la moto", 80.0f);
        Servicio servicio4("Cambio de bujías", "Sustitución de las bujías por unas nuevas", 30.0f);
        Servicio servicio5("Revisión de frenos", "Verificación y ajuste del sistema de frenos", 70.0f);
        servicios[0]=servicio1;
        servicios[1]=servicio2;
        servicios[2]=servicio3;
        servicios[3]=servicio4;
        servicios[4]=servicio5;

        // Inicializar 5 objetos de la clase RepuestoMoto
        RepuestoMoto repuesto1("Aceite de motor", 20.0f, 10, "2023-05-29");
        RepuestoMoto repuesto2("Filtro de aire", 15.0f, 5, "2023-05-29");
        RepuestoMoto repuesto3("Bujías", 8.0f, 20, "2023-05-29");
        RepuestoMoto repuesto4("Pastillas de freno", 25.0f, 8, "2023-05-29");
        RepuestoMoto repuesto5("Llantas", 100.0f, 4, "2023-05-29");
        repuestos[0]=repuesto1;
        repuestos[1]=repuesto2;
        repuestos[2]=repuesto3;
        repuestos[3]=repuesto4;
        repuestos[4]=repuesto5;

        // Inicializar 5 objetos de la clase Moto
        Moto moto1("Honda", "CBR250R", "Rojo", 2, "2023-05-29", 5000.0f);
        Moto moto2("Yamaha", "YZF-R6", "Azul", 1, "2023-05-29", 8000.0f);
        Moto moto3("Suzuki", "GSX-R750", "Negro", 3, "2023-05-29", 7000.0f);
        Moto moto4("Kawasaki", "Ninja 400", "Verde", 2, "2023-05-29", 5500.0f);
        Moto moto5("BMW", "S1000RR", "Blanco", 1, "2023-05-29", 12000.0f);
        motos[0]=moto1;
        motos[1]=moto2;
        motos[2]=moto3;
        motos[3]=moto4;
        motos[4]=moto5;
        
        // Inicializar 5 objetos de la clase Cliente
        clientes[0].setNombreCliente("Juan Perez");
        clientes[1].setNombreCliente("Maria Garcia");
        clientes[2].setNombreCliente("Carlos Lopez");
        clientes[3].setNombreCliente("Ana Rodriguez");
        clientes[4].setNombreCliente("Pedro Martinez");

        // Inicializar 5 objetos de la clase Empleado
        empleados[0].setNombreEmpleado("Luis Sanchez");
        empleados[1].setNombreEmpleado("Laura Gomez");
        empleados[2].setNombreEmpleado("Roberto Ramirez");
        empleados[3].setNombreEmpleado("Marta Fernandez");
        empleados[4].setNombreEmpleado("David Torres");

    }
    //Metodos getter and setter de cada atributo
    Servicio getServicios(int numero) {
        return servicios[numero];
    }

    void setServicios(Servicio _servicio, int numero) {
        servicios[numero] = _servicio;
    }

    RepuestoMoto getRepuestos(int numero) {
        return repuestos[numero];
    }

    void setRepuestos(RepuestoMoto _repuesto, int numero) {
        repuestos[numero] = _repuesto;
    }

    Moto getMotos(int numero) {
        return motos[numero];
    }

    void setMotos(Moto _moto, int numero) {
        motos[numero] = _moto;
    }

    Cliente getClientes(int numero) {
        return clientes[numero];
    }

    void setClientes(Cliente _cliente, int numero) {
        clientes[numero] = _cliente;
    }

    Empleado getEmpleados(int numero) {
        return empleados[numero];
    }

    void setEmpleados(Empleado _empleado, int numero) {
        empleados[numero] = _empleado;
    }

};