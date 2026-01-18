//Ejercicio 3
#include "MatrizOperaciones.h"

void MatrizOperaciones::limpiar() {
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            m[i][j]=0;
        }
    }
}

string MatrizOperaciones::toString() {
    stringstream ss;
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            ss << m[i][j] << "\t";
        }
        ss << endl;
    }
    return ss.str();
}

MatrizOperaciones::MatrizOperaciones() {
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            m[i][j] = 0;
        }
    }
}

void MatrizOperaciones::llenarFila(int fila, int valor) {
    for (int i = 0; i < 4; i++) {
        m[fila][i] = valor;
    }
}

void MatrizOperaciones::llenarColumna(int columna, int valor) {
    for (int j = 0; j < 4; j++) {
        m[columna][j] = valor;
    }
}

int MatrizOperaciones::sumarFila(int fila) {
    int suma = 0;
    for (int i = 0; i < 4; i++) {
        suma += m[fila][i];
    }
    return suma;
}

int MatrizOperaciones::sumarColumna(int columna) {
    int suma = 0;
    for (int j = 0; j < 4; j++) {
        suma += m[columna][j];
    }
    return suma;
}

float MatrizOperaciones::promedioFila(int fila) {
    float sumaPromedio = 0;
    for (int i = 0; i < 4; i++) {
        sumaPromedio += m[fila][i];
    }
    return sumaPromedio / 4.0;
}

