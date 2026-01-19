//Ejercicio 17

#include "MatrizDinaPunteAObj.h"

MatrizPunterosObj::MatrizPunterosObj(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new int**[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new int*[columnas];
        for (int j = 0; j < columnas; j++) {
            m[i][j] = nullptr;
        }
    }
}

MatrizPunterosObj::~MatrizPunterosObj() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void MatrizPunterosObj::asignarValor(int fila, int columna, int valor) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = new int(valor);
    }
}

int MatrizPunterosObj::obtenerValor(int fila, int columna) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        if (m[fila][columna] != nullptr) {
            return *m[fila][columna];
        }
    }
    return -1;
}

string MatrizPunterosObj::toString() {
    stringstream ss;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                ss << *m[i][j] << "\t";
            } else {
                ss << "X\t";
            }
        }
        ss << endl;
    }

    return ss.str();
}
