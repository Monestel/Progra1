//Ejercicio 14

#include "MatrizDinamicaGrupo.h"

MatrizDinamicaGrupo::MatrizDinamicaGrupo(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new MatrizDinamicaEst*[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new MatrizDinamicaEst[columnas];
    }
}

MatrizDinamicaGrupo::~MatrizDinamicaGrupo() {
    for (int i = 0; i < filas; i++) {
        delete[] m[i];
    }
    delete[] m;
}

void MatrizDinamicaGrupo::agregarEstudiante(int fila, int columna, string nombre, double calificaciones[]) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        m[fila][columna] = MatrizDinamicaEst(nombre, calificaciones);
    }
}

double MatrizDinamicaGrupo::promedioGrupo() {
    double suma = 0;
    int total = filas * columnas;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += m[i][j].promedio();
        }
    }

    return suma / total;
}

MatrizDinamicaEst MatrizDinamicaGrupo::mejorPromedio() {
    MatrizDinamicaEst mejor = m[0][0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j].promedio() > mejor.promedio()) {
                mejor = m[i][j];
            }
        }
    }

    return mejor;
}

int MatrizDinamicaGrupo::estudiantesAprobados(double notaMinima) {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j].promedio() >= notaMinima) {
                contador++;
            }
        }
    }

    return contador;
}
