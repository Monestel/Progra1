//Ejercicio 14

#ifndef MATRIZDINAMICAGRUPO_H
#define MATRIZDINAMICAGRUPO_H

#include "MatrizDinamicaEst.h"

class MatrizDinamicaGrupo {
private:

    MatrizDinamicaEst** m;
    int filas;
    int columnas;

public:
    MatrizDinamicaGrupo(int filas, int columnas);
    ~MatrizDinamicaGrupo();

    void agregarEstudiante(int fila, int columna, string nombre, double calificaciones[]);
    double promedioGrupo();
    MatrizDinamicaEst mejorPromedio();
    int estudiantesAprobados(double notaMinima);
};

#endif //EJERCICIOSMATRICES_MATRIZDINAMICAGRUPO_H
