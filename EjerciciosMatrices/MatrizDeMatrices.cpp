#include "MatrizDeMatrices.h"

MatrizDeMatrices::MatrizDeMatrices(int fp, int cp, int fs, int cs) {
    filasP = fp;
    colsP = cp;
    filasS = fs;
    colsS = cs;

    m = new int***[filasP];
    for (int i = 0; i < filasP; i++) {
        m[i] = new int**[colsP];
        for (int j = 0; j < colsP; j++) {
            m[i][j] = new int*[filasS];
            for (int x = 0; x < filasS; x++) {
                m[i][j][x] = new int[colsS];
                for (int y = 0; y < colsS; y++) {
                    m[i][j][x][y] = 0;
                }
            }
        }
    }
}

MatrizDeMatrices::~MatrizDeMatrices() {
    for (int i = 0; i < filasP; i++) {
        for (int j = 0; j < colsP; j++) {
            for (int x = 0; x < filasS; x++) {
                delete[] m[i][j][x];
            }
            delete[] m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

string MatrizDeMatrices::toString() {
    stringstream ss;
    for (int i = 0; i < filasP; i++) {
        for (int j = 0; j < colsP; j++) {
            ss << "Submatriz (" << i << "," << j << ")\n";
            for (int x = 0; x < filasS; x++) {
                for (int y = 0; y < colsS; y++) {
                    ss << m[i][j][x][y] << "\t";
                }
                ss << endl;
            }
            ss << endl;
        }
    }
    return ss.str();
}

void MatrizDeMatrices::limpiar() {
    for (int i = 0; i < filasP; i++) {
        for (int j = 0; j < colsP; j++) {
            for (int x = 0; x < filasS; x++) {
                for (int y = 0; y < colsS; y++) {
                    m[i][j][x][y] = 0;
                }
            }
        }
    }
}

void MatrizDeMatrices::asignarValor(int filaP, int colP, int filaS, int colS, int valor) {
    if (filaP >= 0 && filaP < filasP &&
        colP >= 0 && colP < colsP &&
        filaS >= 0 && filaS < filasS &&
        colS >= 0 && colS < colsS) {
        m[filaP][colP][filaS][colS] = valor;
    }
}

int MatrizDeMatrices::obtenerValor(int filaP, int colP, int filaS, int colS) {
    if (filaP >= 0 && filaP < filasP &&
        colP >= 0 && colP < colsP &&
        filaS >= 0 && filaS < filasS &&
        colS >= 0 && colS < colsS) {
        return m[filaP][colP][filaS][colS];
    }
    return -1;
}

int MatrizDeMatrices::sumarSubmatriz(int filaP, int colP) {
    if (filaP < 0 || filaP >= filasP || colP < 0 || colP >= colsP) {
        return 0;
    }

    int suma = 0;
    for (int i = 0; i < filasS; i++) {
        for (int j = 0; j < colsS; j++) {
            suma += m[filaP][colP][i][j];
        }
    }
    return suma;
}
