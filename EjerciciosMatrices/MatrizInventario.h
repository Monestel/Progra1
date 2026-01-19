// Ejercicio 8

#ifndef EJERCICIOSMATRICES_MATRIZINVENTARIO_H
#define EJERCICIOSMATRICES_MATRIZINVENTARIO_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizInventario {

private:

    static const int PRODUCTOS = 6;
    static const int ALMACENES = 5;
    int m[PRODUCTOS][ALMACENES];

public:
    /*
     Constructor que inicializa todo en 0
     agregarCantidad(int producto, int almacen, int cantidad)
     totalProducto(int producto)
     totalAlmacen(int almacen)
     almacenConMasProductos()
    */

    MatrizInventario();
    void agregarCantidad(int producto, int almacen, int cantidad);
    int totalProducto(int producto);
    int totalAlmacen(int almacen);
    int almacenConMasProductos();
    string toString();
};

#endif //EJERCICIOSMATRICES_MATRIZINVENTARIO_H
