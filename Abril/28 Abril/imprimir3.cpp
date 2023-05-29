#include <iostream>
#include <string>
#include <fstream> //libreira para archivos
// #include "facultad_01.cpp"
#include "estudiante.cpp"

using namespace std;

int main(){
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

    // crear cursos de FIIS
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseño de BD", 3);
    Curso curs_3("0003", "Sotfware I", 3);
    Curso curs_4("0004", "Sotfware II", 4);
    Curso curs_5("0005", "Gestion de procesos", 4);
    
    //crear cursos de ZOOTECNIA
    Curso curs_6("0001", "INTRODUCCION AL DESARROLLO DEL PERFIL ZOOTECNISTA", 2);
    Curso curs_7("0002", "PRACTICAS ZOOTECNICAS II", 2);
    Curso curs_8("0003", "METODOLOGIA DE LA INVESTIGACION CIENTIFICA I", 3);
    Curso curs_9("0004", "FISIOLOGIA ANIMAL", 4);
    Curso curs_10("0005", "NUTRICION ANIMAL", 4);

    // agregando cursos para est1
    est1.agregarCurso(curs_1);
    est1.agregarCurso(curs_2);
    est1.agregarCurso(curs_3);
    est1.agregarCurso(curs_4);
    est1.agregarCurso(curs_5);
    est1.agregarCurso(curs_1);

    // agregando cursos para est5
    est5.agregarCurso(curs_6);
    est5.agregarCurso(curs_7);
    est5.agregarCurso(curs_8);
    est5.agregarCurso(curs_9);
    est5.agregarCurso(curs_10);
    est5.agregarCurso(curs_6);


    Estudiante listalumnos[2]= {est1, est5};
    Facultad facu[2] = {facu1,facu2};
    // declaramos

    for(int i=0;i<2;i++){
        listalumnos[i].getDatos();
        listalumnos[i].ingresarNotas();  
    }
    ofstream archivo("estudiante.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << "estudiantes de la facultad FIIS\n";
    for (int i=0;i<2;i++){
        if(listalumnos[i].getFacultad().getSigla()== "FIIS"){
            archivo << listalumnos[i].getDatosP() << "\n";
            for(int j=0;j<5;j++){
                archivo << listalumnos[i].getDescripcionCurso(j) << "\n";
                archivo << listalumnos[i].getNotas(j);
                archivo << "\n";
            }
            archivo << "\n";
        }
    }

    archivo << "estudiantes de la facultad FZ\n";
    for (int i=0;i<2;i++){
        if(listalumnos[i].getFacultad().getSigla()== "FIIS"){
            archivo << listalumnos[i].getDatosP() << "\n";
            for(int j=0;j<5;j++){
                archivo << listalumnos[i].getDescripcionCurso(j) << "\n";
                archivo << listalumnos[i].getNotas(j);
                archivo << "\n";
            }
            archivo << "\n";
        }
    }
    archivo.close();
}