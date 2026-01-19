//Ejercicio 13

#ifndef EJERCICIOSMATRICES_MATRIZDINAMICAPRODUCTO_H
#define EJERCICIOSMATRICES_MATRIZDINAMICAPRODUCTO_H

#include <string>
using namespace std;

class MatrizDinamicaProducto {

private:

    string nombre;
    double precio;
    int stock;

public:
    MatrizDinamicaProducto();
    MatrizDinamicaProducto(string nombre, double precio, int stock);

    string getNombre();
    double getPrecio();
    int getStock();

    void setStock(int s);
};

#endif //EJERCICIOSMATRICES_MATRIZDINAMICAPRODUCTO_H
