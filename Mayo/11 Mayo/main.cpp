#include <iostream>
#include "usuario.cpp"
#include "biblioteca.cpp"
#include <fstream>
using namespace std;

int main()
{
    Biblioteca biblio("7541", "Biblioteca Nacional", "A.v New.York", "945316482");

    Usuario usu1("001", "91526248", "Tito", "Laurencio", "LaurencioT42@gmail.com", "953484220", "A.v Dubai");

    Bibliotecario biblio1("023", "49232629", "Abelino", "Akiro", "AkiroAbeli12@gmail.com", "948120955", "A.v Brasil");

    Libro libro_1={"001", "Idempotencia de numeros", "Enseñanza", "Eudolio Franchesco"};
    Libro libro_2={"002", "El cuento del Vakacmasa", "Literario", "Kitoro Yuriko"};
    Libro libro_3={"003", "El principito", "literario", "Cesar Armando"};

    Prestado pres1("");

    int opc;
    cout<< "Bienvenido a la "<<biblio.getNombre()<<endl;
    cout<< "*******LIBROS***********"<<endl;
    cout<<"Qué libros desea adquerir"<<endl;
    cout<<"1. "<<libro_1.getTitulo()<<endl;
    cout<<"2. "<<libro_2.getTitulo()<<endl;
    cout<<"3. "<<libro_3.getTitulo()<<endl;

    cin>>opc;
    while (opc>3)
    {
        cout<<"Opcion icorrecta, ingrese otro numero"<<endl;
    }
    
    if(opc==1)
    {
        pres1.AgregarLibro(libro_1);
        cout<<"Usted a elegido el libro"<<pres1.MostrarLibro(1);
    }

    if(opc==2)
    {
        pres1.AgregarLibro(libro_2);
        cout<<"Usted a elegido el libro"<<pres1.MostrarLibro(1);
    }

    if(opc==3)
    {
        pres1.AgregarLibro(libro_3);
        cout<<"Usted a elegido el libro"<<pres1.MostrarLibro(1);
    }
    
    ofstream archivo("Reporte Biblioteca.txt");
    if(!archivo.is_open())
    {
        cout<< "Error al abrir el archivo"<<endl;
        return 1;
    }

    archivo<<biblio.getNombre();
    archivo<< "******************"<<endl;

    archivo<<"Bibliotecario: "<<biblio1.getDatosBiblio()<<endl;
    archivo<<pres1.MostrarLibro(1)<<endl;
    archivo<<usu1.getDatosUsu();
    archivo.close();
    
    return 0;
}