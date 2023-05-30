#include <iostream>
#include <string>
#include <fstream>
#include "tienda.cpp"

using namespace std;

int main() {
    Tienda tienda("Motorin");

    tienda.inicializar_clases();

    tienda.completar_clientes();
    tienda.completar_Servicios();
    int opcion;
    bool salir = false;

    do {
        // Mostrar el menu
        cout << "===== Menu Principal =====" << endl;
        cout << "1. Generar reporte de motos vendidas" << endl;
        cout << "2. Generar reporte de servicios realizados" << endl;
        cout << "3. Generar reporte de clientes comunes y su consumo por fecha" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese el numero de opción: ";
        cin >> opcion;
        system("cls");
        string mensaje;

        switch (opcion) {
            case 1: {
                //reporte de motos vendidas
                ofstream archivo("informe.txt");

                if (!archivo) {
                    cout << "No se pudo abrir el archivo." << endl;
                    return 1;
                }
                archivo << "Informe de Motos Vendidas" << endl;
                archivo << "-------------------------" << endl;

                for (int i = 0; i < 5; i++) {
                    archivo << "Cliente: " << tienda.getClientes(i).getNombreCliente() << endl;
                    archivo << "Fecha de compra: " << tienda.getClientes(i).getFechaCompra(i) << endl;
                    archivo << "Moto(s) comprada(s): " << endl;
                    archivo << tienda.getClientes(i).getCompras(i) << endl;
                    archivo << endl;
                }

                // Cerrar el archivo
                archivo.close();

                cout << "Informe generado correctamente en el archivo informe.txt" << endl;
                cout << "si quiere generar otro informe digite 'si' \n";
                cin >> mensaje;
                if(mensaje=="si"){
                    salir = false;
                }else{
                    salir = true;
                }

                break;
            }
            case 2: {
                //reporte de servicios realizados
                ofstream reporteServicios("reporte_servicios.txt");

                if (reporteServicios.is_open()) {
                    for (int i = 0; i < 5; i++) {
                        Servicio servicio = tienda.getServicios(i);
                        string nombreServicio = servicio.getNombreServicio();
                        string trabajadorAsignado = servicio.getTrabajador();
                        string tiempoRealizar = servicio.getTiempoRealizar();
                        string repuestos = servicio.getRepuesto();

                        reporteServicios << "Servicio: " << nombreServicio << endl;
                        reporteServicios << "Trabajador: " << trabajadorAsignado << endl;
                        reporteServicios << "Tiempo de realización: " << tiempoRealizar << endl;
                        reporteServicios << "Repuestos vendidos: " << repuestos << endl;
                        reporteServicios << "---------------------------------------" << endl;
                    }

                    reporteServicios.close();
                    cout << "Se ha generado el reporte de servicios en el archivo 'reporte_servicios.txt'." << endl;
                    cout << "si quiere generar otro informe digite 'si' \n";
                    cin >> mensaje;
                    if(mensaje=="si"){
                        salir = false;
                    }else{
                        salir = true;
                    }
                } else {
                    cout << "No se pudo abrir el archivo para generar el reporte de servicios." << endl;
                    cout << "si quiere generar otro informe digite 'si' \n";
                    cin >> mensaje;
                    if(mensaje=="si"){
                        salir = false;
                    }else{
                        salir = true;
                    }
                }
                break;
            }
            case 3: {
                // reporte de clientes y su consumo por fecha
                ofstream reporteClientes("reporte_clientes.txt");

                if (reporteClientes.is_open()) {
                    for (int i = 0; i < 5; i++) {
                        Cliente cliente = tienda.getClientes(i);
                            string nombreCliente = cliente.getNombreCliente();
                            reporteClientes << "Cliente: " << nombreCliente << endl;

                            for (int j = 0; j < 5; j++) {
                                string fechaCompra = cliente.getFechaCompra(j);
                                string consumo = cliente.getCompras(j);
                                reporteClientes << "Fecha de compra: " << fechaCompra << ", compra:" << consumo << endl;
                            }

                            reporteClientes << "---------------------------------------" << endl;
                    }

                    reporteClientes.close();
                    cout << "Se ha generado el reporte de clientes en el archivo 'reporte_clientes.txt'." << endl;
                    cout << "si quiere generar otro informe digite 'si' \n";
                    cin >> mensaje;
                    if(mensaje=="si"){
                        salir = false;
                    }else{
                        salir = true;
                    }
                } else {
                    cout << "No se pudo abrir el archivo para generar el reporte de clientes." << endl;
                    cout << "si quiere generar otro informe digite 'si' \n";
                    cin >> mensaje;
                    if(mensaje=="si"){
                        salir = false;
                    }else{
                        salir = true;
                    }
                }

                break;
            }
            case 4: {
                salir = true;
                break;
            }
            default:
                cout << "Opción inválida. Por favor, ingrese un número válido." << endl;
                break;
        }

        cout << endl;

    } while (!salir);


    return 0;
}