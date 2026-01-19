//Ejercicio 13

#ifndef EJERCICIOSMATRICES_MATRIZINVENTARIODINAMICO_H
#define EJERCICIOSMATRICES_MATRIZINVENTARIODINAMICO_H

#include <iostream>
#include <sstream>
#include <string>

 class MatrizDinamicaProducto;
using namespace std;

class MatrizInventarioDinamico {

private:

    int filas;
    int columnas;
    MatrizDinamicaProducto **m;

public:
    /*
     Constructor(filas, columnas)
     Destructor
     agregarProducto(...)
     valorTotalInventario()
     productoMasCaro()
     productosConStockBajo(int limite)
    */

    MatrizInventarioDinamico(int filas, int columnas);
    ~MatrizInventarioDinamico();
    MatrizInventarioDinamico();

    void agregarProducto(int fila, int columna, string nombre, double precio, int stock);
    double valorTotalInventario();
    MatrizDinamicaProducto productoMasCaro();
    int productosConStockBajo(int limite);
};

#endif //EJERCICIOSMATRICES_MATRIZINVENTARIODINAMICA_H
