//Ejercicios 1 y 2
#include "MatrizEnteros.h"


MatrizEnteros::MatrizEnteros() {
    this->limpiar();

}

void MatrizEnteros::insertar(int fila, int columna, int valor) {

    if (fila>=0 && fila< FIL && columna>=0 && columna<COL) {

        m[fila][columna] = valor;
    }

}

int MatrizEnteros::obtener(int fila, int columna) {

    if (fila>=0 && fila< FIL && columna>=0 && columna<COL) {
        return m[fila][columna] ;
    }
    return -1;

}

string MatrizEnteros::toString() {
    stringstream ss;
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            ss << m[i][j] << "\t";
        }
        ss << endl;
    }
    return ss.str();
}

void MatrizEnteros::limpiar() {
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            m[i][j]=0;
        }
    }
}

//Ejercicio 2

bool MatrizEnteros::buscar(int valor) {
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            if (m[i][j] == valor) {
                return true;
            }
        }
    }
    return false;
}

int MatrizEnteros::contarApariciones(int valor) {
    int contador = 0;

    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            if (m[i][j] == valor) {
                contador++;
            }
        }
    }
    return contador;
}

bool MatrizEnteros::buscarEnFila(int fila, int valor) {
    for (int j = 0; j < COL; j++) {
        if (m[fila][j] == valor) {
            return true;
        }
    }
    return false;
}

bool MatrizEnteros::buscarEnColumna(int columna, int valor) {
    for (int j = 0; j < FIL; j++) {
        if (m[columna][j] == valor) {
            return true;
        }
    }
    return false;
}
