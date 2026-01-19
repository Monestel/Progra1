// Ejercicio 8
#include "MatrizInventario.h"

MatrizInventario::MatrizInventario() {
    for (int i = 0; i < PRODUCTOS; i++) {
        for (int j = 0; j < ALMACENES; j++) {
            m[i][j] = 0;
        }
    }
}

void MatrizInventario::agregarCantidad(int producto, int almacen, int cantidad) {
    if (producto >= 0 && producto < PRODUCTOS &&
        almacen >= 0 && almacen < ALMACENES &&
        cantidad >= 0) {
        m[producto][almacen] += cantidad;
        }
}

int MatrizInventario::totalProducto(int producto) {
    if (producto < 0 || producto >= PRODUCTOS) {
        return 0;
    }

    int suma = 0;
    for (int j = 0; j < ALMACENES; j++) {
        suma += m[producto][j];
    }
    return suma;
}

int MatrizInventario::totalAlmacen(int almacen) {
    if (almacen < 0 || almacen >= ALMACENES) {
        return 0;
    }

    int suma = 0;
    for (int i = 0; i < PRODUCTOS; i++) {
        suma += m[i][almacen];
    }
    return suma;
}

int MatrizInventario::almacenConMasProductos() {
    int almacenMax = 0;
    int maxTotal = totalAlmacen(0);

    for (int j = 1; j < ALMACENES; j++) {
        int total = totalAlmacen(j);
        if (total > maxTotal) {
            maxTotal = total;
            almacenMax = j;
        }
    }
    return almacenMax;
}

string MatrizInventario::toString() {
    stringstream ss;
    for (int i = 0; i < PRODUCTOS; i++) {
        for (int j = 0; j < ALMACENES; j++) {
            ss << m[i][j] << "\t";
        }
        ss << endl;
    }
    return ss.str();
}
