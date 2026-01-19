#include "ColeccionPersonasPunteros.h"

ColeccionPersonasPunteros::ColeccionPersonasPunteros(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new MatrizDinamicaPers**[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new MatrizDinamicaPers*[columnas];
        for (int j = 0; j < columnas; j++) {
            m[i][j] = nullptr;
        }
    }
}

ColeccionPersonasPunteros::~ColeccionPersonasPunteros() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void ColeccionPersonasPunteros::agregarPersona(int fila, int columna, string nombre, int edad) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = new MatrizDinamicaPers(nombre, edad);
    }
}

void ColeccionPersonasPunteros::eliminarPersona(int fila, int columna) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = nullptr;
    }
}

MatrizDinamicaPers ColeccionPersonasPunteros::personaMasVieja() {
    MatrizDinamicaPers* mayor = nullptr;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                if (mayor == nullptr || m[i][j]->getEdad() > mayor->getEdad()) {
                    mayor = m[i][j];
                }
            }
        }
    }

    if (mayor != nullptr) {
        return *mayor;
    }

    return MatrizDinamicaPers("", 0);
}

int ColeccionPersonasPunteros::contarPersonas() {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                contador++;
            }
        }
    }

    return contador;
}
