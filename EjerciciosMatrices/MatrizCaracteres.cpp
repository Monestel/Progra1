//Ejercicio 4
#include "MatrizCaracteres.h"

void MatrizCaracteres::limpiar() {
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            m[i][j]=0;
        }
    }
}


string MatrizCaracteres::toString() {
    stringstream ss;
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            ss << m[i][j] << "\t";
        }
        ss << endl;
    }
    return ss.str();
}

MatrizCaracteres::MatrizCaracteres() {
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            m[i][j] = ' ';
        }
    }
}

void MatrizCaracteres::insertarCaracter(int fila, int columna, char c) {
    if (fila >= 0 && fila < 3 && columna >= 0 && columna < 3) {
        m[fila][columna] = c;
    }
}

int MatrizCaracteres::contarCaracter(char c) {
    int contador = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i][j] == c) {
                contador++;
            }
        }
    }

    return contador;
}

bool MatrizCaracteres::verificarFilaIgual(int fila) {
    if (fila < 0 || fila >= 3) {
        return false;
    }


    char referencia = m[fila][0];

    for (int j = 1; j < 3; j++) {
        if (m[fila][j] != referencia) {
            return false;
        }
    }

    return true;
}


