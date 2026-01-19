#include "MatrizDinaPunteAEst.h"

Aula::Aula(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new MatrizDinamicaEst**[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new MatrizDinamicaEst*[columnas];
        for (int j = 0; j < columnas; j++) {
            m[i][j] = nullptr;
        }
    }
}

Aula::~Aula() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void Aula::agregarEstudiante(int fila, int columna, string nombre, double calificaciones[]) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = new MatrizDinamicaEst(nombre, calificaciones);
    }
}

void Aula::eliminarEstudiante(int fila, int columna) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = nullptr;
    }
}

double Aula::promedioAula() {
    double suma = 0;
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                suma += m[i][j]->promedio();
                contador++;
            }
        }
    }

    if (contador == 0) {
        return 0;
    }

    return suma / contador;
}

MatrizDinamicaEst Aula::mejorEstudiante() {
    MatrizDinamicaEst *mejor = nullptr;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                if (mejor == nullptr || m[i][j]->promedio() > mejor->promedio()) {
                    mejor = m[i][j];
                }
            }
        }
    }

    if (mejor == nullptr) {
        double notas[5] = {0,0,0,0,0};
        return MatrizDinamicaEst("", notas);
    }

    return *mejor;
}

void Aula::reemplazarEstudiante(int fila, int columna, string nombre, double calificaciones[]) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = new MatrizDinamicaEst(nombre, calificaciones);
    }
}
