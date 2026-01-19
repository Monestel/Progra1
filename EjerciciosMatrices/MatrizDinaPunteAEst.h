#ifndef MATRIZDINAPUNTEAEST_H
#define MATRIZDINAPUNTEAEST_H

#include <string>
#include "MatrizDinamicaEst.h"
using namespace std;

class Aula {

private:

    int filas;
    int columnas;
    MatrizDinamicaEst ***m;

public:
    Aula(int filas, int columnas);
    ~Aula();

    void agregarEstudiante(int fila, int columna, string nombre, double calificaciones[]);
    void eliminarEstudiante(int fila, int columna);
    double promedioAula();
    MatrizDinamicaEst mejorEstudiante();
    void reemplazarEstudiante(int fila, int columna, string nombre, double calificaciones[]);
};

#endif
#ifndef AULA_H
#define AULA_H

#include <string>
#include "MatrizDinamicaEst.h"
using namespace std;

class ESTAula {

private:
    int filas;
    int columnas;
    MatrizDinamicaEst ***m;

public:
    ESTAula(int filas, int columnas);
    ~ESTAula();

    void agregarEstudiante(int fila, int columna, string nombre, double calificaciones[]);
    void eliminarEstudiante(int fila, int columna);
    double promedioAula();
    MatrizDinamicaEst mejorEstudiante();
    void reemplazarEstudiante(int fila, int columna, string nombre, double calificaciones[]);
};

#endif //EJERCICIOSMATRICES_MATRIZDINAPUNTEAEST_H