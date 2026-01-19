// Ejercicio 11
#include "MatrizDinamicaEnt.h"

MatrizDinamicaEnt::MatrizDinamicaEnt(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new int*[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new int[columnas];
        for (int j = 0; j < columnas; j++) {
            m[i][j] = 0;
        }
    }
}

MatrizDinamicaEnt::~MatrizDinamicaEnt() {
    for (int i = 0; i < filas; i++) {
        delete[] m[i];
    }
    delete[] m;
}

string MatrizDinamicaEnt::toString() {
    stringstream ss;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            ss << m[i][j] << "\t";
        }
        ss << endl;
    }
    return ss.str();
}

void MatrizDinamicaEnt::insertar(int fila, int columna, int valor) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        m[fila][columna] = valor;
    }
}

int MatrizDinamicaEnt::obtener(int fila, int columna) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        return m[fila][columna];
    }
    return 0;
}
