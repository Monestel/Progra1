#ifndef EJERCICIOSMATRICES_MATRIZALMACEN_H
#define EJERCICIOSMATRICES_MATRIZALMACEN_H

#include <iostream>
#include <sstream>
#include "SistemaAlmacen.h"
using namespace std;

class Almacen {

private:
    int estantes;
    int categorias;
    Articulo*** m;

public:
    Almacen(int e, int c);
    ~Almacen();

    string toString();
    void limpiar();

    void agregarArticulo(int estante, int categoria, string codigo, string nombre, string cat, int cantidad, double precio);
    void eliminarArticulo(int estante, int categoria);
    int articulosPorCategoria(int categoria);
    double valorEstante(int estante);
    Articulo articuloMasCaro();
    int articulosAgotados();
};

#endif //EJERCICIOSMATRICES_MATRIZALMACEN_H
