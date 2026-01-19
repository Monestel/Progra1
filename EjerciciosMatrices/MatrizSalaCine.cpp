// Ejercicio 10
#include "MatrizSalaCine.h"

MatrizSalaCine::MatrizSalaCine() {
    limpiar();
}

void MatrizSalaCine::limpiar() {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            m[i][j] = 0;
        }
    }
}

string MatrizSalaCine::toString() {
    stringstream ss;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            ss << m[i][j] << " ";
        }
        ss << endl;
    }
    return ss.str();
}

void MatrizSalaCine::reservarAsiento(int fila, int columna) {
    if (fila >= 0 && fila < FILAS && columna >= 0 && columna < COLUMNAS) {
        m[fila][columna] = 1;
    }
}

int MatrizSalaCine::asientosDisponibles() {
    int libres = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (m[i][j] == 0) {
                libres++;
            }
        }
    }
    return libres;
}

bool MatrizSalaCine::filaCompleta(int fila) {
    if (fila < 0 || fila >= FILAS) {
        return false;
    }

    for (int j = 0; j < COLUMNAS; j++) {
        if (m[fila][j] == 0) {
            return false;
        }
    }
    return true;
}

int MatrizSalaCine::mejorFila() {
    int mejor = 0;
    int maxLibres = -1;

    for (int i = 0; i < FILAS; i++) {
        int libres = 0;
        for (int j = 0; j < COLUMNAS; j++) {
            if (m[i][j] == 0) {
                libres++;
            }
        }

        if (libres > maxLibres) {
            maxLibres = libres;
            mejor = i;
        }
    }
    return mejor;
}
