//Ejercicio 21

#include "MatrizHotel.h"

Hotel::Hotel(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new Habitacion **[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new Habitacion*[columnas];
        for (int j = 0; j < columnas; j++) {
            m[i][j] = nullptr;
        }
    }
}

Hotel::~Hotel() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void Hotel::reservarHabitacion(int fila, int columna, int numero, string tipo, double precio) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = new Habitacion(numero, tipo, precio);
    }
}

void Hotel::liberarHabitacion(int fila, int columna) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = nullptr;
    }
}

int Hotel::habitacionesDisponibles() {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] == nullptr) {
                contador++;
            }
        }
    }

    return contador;
}

double Hotel::ingresosTotales() {
    double suma = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                suma += m[i][j]->getPrecio();
            }
        }
    }

    return suma;
}

Habitacion Hotel::habitacionMasCara() {
    Habitacion *cara = nullptr;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                if (cara == nullptr || m[i][j]->getPrecio() > cara->getPrecio()) {
                    cara = m[i][j];
                }
            }
        }
    }

    if (cara == nullptr) {
        return Habitacion();
    }

    return *cara;
}
