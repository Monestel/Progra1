#ifndef MATRIZDINAPUNTEAPROD_H
#define MATRIZDINAPUNTEAPROD_H

#include <string>
#include "MatrizDinamicaProducto.h"
using namespace std;

class Tienda {

private:

    MatrizDinamicaProducto*** m;
    int filas;
    int columnas;

public:
    Tienda(int filas, int columnas);
    ~Tienda();

    void agregarProducto(int fila, int columna, string nombre, double precio, int stock);
    void eliminarProducto(int fila, int columna);
    bool buscarProducto(string nombre);
    void actualizarStock(int fila, int columna, int nuevoStock);
    int productosAgotados();
};

#endif //EJERCICIOSMATRICES_MATRIZDINAPUNTEAPROD_H
