// Ejercicio 12 - ColeccionPersonas
#include "ColeccionPersonas.h"

ColeccionPersonas::ColeccionPersonas(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new MatrizDinamicaPers *[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new MatrizDinamicaPers[columnas];
    }
}

ColeccionPersonas::~ColeccionPersonas() {
    for (int i = 0; i < filas; i++) {
        delete[] m[i];
    }
    delete[] m;
}

void ColeccionPersonas::agregarPersona(int fila, int columna, string nombre, int edad) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        m[fila][columna] = MatrizDinamicaPers(nombre, edad);
    }
}

MatrizDinamicaPers ColeccionPersonas::personaMasJoven() {
    MatrizDinamicaPers menor = m[0][0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j].getEdad() < menor.getEdad()) {
                menor = m[i][j];
            }
        }
    }

    return menor;
}

double ColeccionPersonas::promedioEdades() {
    int suma = 0;
    int total = filas * columnas;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += m[i][j].getEdad();
        }
    }

    return (double)suma / total;
}
