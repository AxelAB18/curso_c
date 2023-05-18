#include <iostream>
#include "estudiante.cpp"
#include "escuela.cpp"
#include <fstream> //libreira para archivos
using namespace std;
int main()
{
    Escuela escuela_1("Gomez Arias Davila", "Av.Raymondi", "I.E.E", "0625580");

    Docente docente_1("202366", "javier60@gmail.com", "967453029", "Javier", "Guzman", "3628523", 45, "masculino");
    Docente docente_2("202345", "rafael_ramirez@gmail.com", "923536753", "Rafael", "Ramirez", "2357658", 35, "masculino");

    Estudiante estudiante_1("001", "Pepe", "Rodrigo", "745253", 11, "masculino", "A");
    Estudiante estudiante_2("002", "Maria", "Kling", "7234623", 10, "femenino", "B");
    Estudiante estudiante_3("003", "Carlos", "Rojas", "723424", 13, "masculino", "B");
    Estudiante estudiante_4("004", "Rafaela", "Grijalva", "727484", 12, "femenino", "A");
    Estudiante estudiante_5("005", "Angelina", "Nieto", "65835", 12, "femenino", "B");
    Estudiante estudiante_6("006", "Guardiola", "Tarazona", "7532532", 11, "masculino", "A");
    Estudiante estudiante_7("007", "Micaela", "Fernandez", "683285", 12, "femenino", "B");
    Estudiante estudiante_8("008", "Valeria", "Chavez", "67238523", 10, "femenino", "A");
    Estudiante estudiante_9("009", "Akemi", "Zambrano", "793223", 12, "femenino", "A");
    Estudiante estudiante_10("010", "Daniel", "Garcia", "7525352", 11, "masculino", "A");

    Estudiante estudiantes[10] = {estudiante_1, estudiante_2, estudiante_3, estudiante_4, estudiante_5, estudiante_6, estudiante_7, estudiante_8, estudiante_9, estudiante_10};
    Docente docentes[2] = {docente_1, docente_2};

    Curso curso_1("Matematica");
    Curso curso_2("Lenguaje");
    Curso curso_3("Educacion Fisica");
    Curso curso_4("Computacion");
    Curso curso_5("Educacion Civica");

    Curso cursos[5] = {curso_1, curso_2, curso_3, curso_4, curso_5};

    int tamanio_Estudiantes = sizeof(estudiantes) / sizeof(estudiantes[0]);

    // declaramos
    ofstream archivo("colegio.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << "Curso que enseña el docente: \n"
            << endl;
    archivo << "el docente: " << docentes[0].getProfe() << " enseña: " << endl;
    archivo << endl;
    archivo << cursos[0].getDatos_curso() << endl;
    archivo << cursos[1].getDatos_curso() << endl;
    archivo << cursos[2].getDatos_curso() << endl;
    archivo << endl;
    archivo << "el docente: " << docentes[1].getProfe() << " enseña: " << endl;
    archivo << cursos[3].getDatos_curso() << endl;
    archivo << cursos[4].getDatos_curso() << endl;

    archivo << "Estudiantes de la seccion A" << endl;
    for (int i = 0; i < tamanio_Estudiantes; i++)
    {
        if (estudiantes[i].getSeccion() == "A")
        {
            archivo << estudiantes[i].getEstudiante() << endl;
        }
    }
    archivo << "Estudiantes de la seccion B" << endl;
    for (int i = 0; i < tamanio_Estudiantes; i++)
    {
        if (estudiantes[i].getSeccion() == "B")
        {
            archivo << estudiantes[i].getEstudiante() << endl;
        }
    }

    for (int i = 0; i < tamanio_Estudiantes; i++)
    {
        for (int y = 0; y < 5; y++)
        {
            estudiantes[i].agregarCurso(cursos[y]);
        }
    }

    cout << "Estudiantes de la seccion A" << endl;
    for (int i = 0; i < tamanio_Estudiantes; i++)
    {
        if (estudiantes[i].getSeccion() == "A")
        {
            estudiantes[i].ingresar_notas();
        }
    }
    cout << "Estudiantes de la seccion A" << endl;
    for (int i = 0; i < tamanio_Estudiantes; i++)
    {
        if (estudiantes[i].getSeccion() == "B")
        {
            estudiantes[i].ingresar_notas();
        }
    }
    archivo << "SECCION A" << endl;
    for (int y = 0; y < tamanio_Estudiantes; y++)
    {
        if (estudiantes[y].getSeccion() == "A")
        {
            archivo << estudiantes[y].getNombre_seccion() << endl;
        }
        for (int i = 0; i < 5; i++)
        {
            if (estudiantes[y].getSeccion() == "A")
            {
                archivo << estudiantes[y].getCurso(i).toString() << endl;
                archivo << endl;
            }
        }
    }
    archivo << "SECCION B" <<endl;
    for (int y = 0; y < tamanio_Estudiantes; y++)
    {
        if (estudiantes[y].getSeccion() == "B")
        {
            archivo << estudiantes[y].getNombre_seccion() << endl;
        }
        for (int i = 0; i < 5; i++)
        {
            if (estudiantes[y].getSeccion() == "B")
            {
                archivo << estudiantes[y].getCurso(i).toString() << endl;
                archivo << endl;
            }
        }
    }
    archivo.close();

    return 0;
}