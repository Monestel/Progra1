#include "MatrizInventarioDinamico.h"
#include "MatrizDinamicaProducto.h"

// ===== Constructor =====
MatrizInventarioDinamico::MatrizInventarioDinamico(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new MatrizDinamicaProducto*[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new MatrizDinamicaProducto[columnas];
    }
}

MatrizInventarioDinamico::~MatrizInventarioDinamico() {
    for (int i = 0; i < filas; i++) {
        delete[] m[i];
    }
    delete[] m;
}

void MatrizInventarioDinamico::agregarProducto(int fila, int columna, string nombre, double precio, int stock) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        m[fila][columna] = MatrizDinamicaProducto(nombre, precio, stock);
    }
}

double MatrizInventarioDinamico::valorTotalInventario() {
    double total = 0.0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            total += m[i][j].getPrecio() * m[i][j].getStock();
        }
    }

    return total;
}

MatrizDinamicaProducto MatrizInventarioDinamico::productoMasCaro() {
    MatrizDinamicaProducto caro = m[0][0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j].getPrecio() > caro.getPrecio()) {
                caro = m[i][j];
            }
        }
    }

    return caro;
}

int MatrizInventarioDinamico::productosConStockBajo(int limite) {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j].getStock() < limite) {
                contador++;
            }
        }
    }

    return contador;
}
