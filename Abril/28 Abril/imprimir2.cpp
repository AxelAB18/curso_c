#include <iostream>
#include <string>
#include <fstream> //libreira para archivos
// #include "facultad_01.cpp"
#include "estudiante.cpp"

using namespace std;

int main()
{
    // agregamos las facultades
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de de Zootecnia", "FZ");

    // listado de estudiantes de la FIIS
    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    est1.setFacultad(facu1);
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    est2.setFacultad(facu1);
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    est3.setFacultad(facu1);
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
    est4.setFacultad(facu1);

    // listado de estudiantes de FZ
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    est5.setFacultad(facu2);
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    est6.setFacultad(facu2);
    Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    est7.setFacultad(facu2);
    Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
    est8.setFacultad(facu2);

    Estudiante listEstudiante[8] = {est1, est2, est3, est4, est5, est6, est7, est8};
Estudiante listEstudianteFIIS[8];
Estudiante listEstudianteFZ[8];
    // declaramos
    ofstream Estudiantes("Estudiantes.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!Estudiantes.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    Estudiantes << "Listado de estudiantes \n";
    int contFIIS=0;
    int contFZ=0;
    for (int i = 0; i < 8; i++)
    {
        Estudiantes << listEstudiante[i].to_string() << "\n";
        if (listEstudiante[i].getFacultad().getSigla() == facu1.getSigla())
        {
           listEstudianteFIIS[contFIIS]=listEstudiante[i];
           contFIIS++;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        Estudiantes << listEstudiante[i].to_string() << "\n";
        if (listEstudiante[i].getFacultad().getSigla() == facu2.getSigla())
        {
           listEstudianteFZ[contFZ]=listEstudiante[i];
           contFZ++;
        }
    }

    Estudiantes <<facu1.toString() <<"\n";
    //2 arreglo for sizeof
    for (int i = 0; i < 8; i++)
    {
        Estudiantes << listEstudianteFIIS[i].to_string() <<"\n";
    }

    Estudiantes <<facu2.toString() <<"\n";
    //2 arreglo for sizeof
    for (int i = 0; i < 8; i++)
    {
        Estudiantes << listEstudianteFZ[i].to_string() << "\n";
    }

    Estudiantes.close();

    return 0;
}