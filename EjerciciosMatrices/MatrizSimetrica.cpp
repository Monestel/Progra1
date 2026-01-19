// Ejercicio 7
#include "MatrizSimetrica.h"

MatrizSimetrica::MatrizSimetrica() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            m[i][j] = 0;
        }
    }
}

void MatrizSimetrica::insertar(int fila, int columna, int valor) {
    if (fila >= 0 && fila < N && columna >= 0 && columna < N) {
        m[fila][columna] = valor;
    }
}

bool MatrizSimetrica::esSimetrica() {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (m[i][j] != m[j][i]) {
                return false;
            }
        }
    }
    return true;
}

void MatrizSimetrica::transponer() {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }
}

bool MatrizSimetrica::esDiagonal() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && m[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

string MatrizSimetrica::toString() {
    stringstream ss;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ss << m[i][j] << "\t";
        }
        ss << endl;
    }
    return ss.str();
}
