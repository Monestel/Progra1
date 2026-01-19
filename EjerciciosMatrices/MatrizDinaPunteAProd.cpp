//Ejercicio 18

#include "MatrizDinaPunteAProd.h"

Tienda::Tienda(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new MatrizDinamicaProducto**[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new MatrizDinamicaProducto*[columnas];
        for (int j = 0; j < columnas; j++) {
            m[i][j] = nullptr;
        }
    }
}

Tienda::~Tienda() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void Tienda::agregarProducto(int fila, int columna, string nombre, double precio, int stock) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = new MatrizDinamicaProducto(nombre, precio, stock);
    }
}

void Tienda::eliminarProducto(int fila, int columna) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = nullptr;
    }
}

bool Tienda::buscarProducto(string nombre) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr && m[i][j]->getNombre() == nombre) {
                return true;
            }
        }
    }
    return false;
}

void Tienda::actualizarStock(int fila, int columna, int nuevoStock) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        if (m[fila][columna] != nullptr) {
            m[fila][columna]->setStock(nuevoStock);
        }
    }
}

int Tienda::productosAgotados() {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr && m[i][j]->getStock() == 0) {
                contador++;
            }
        }
    }

    return contador;
}
