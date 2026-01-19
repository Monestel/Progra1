//Ejercicio 24

#ifndef EJERCICIOSMATRICES_MATRIZEDITORIAL_H
#define EJERCICIOSMATRICES_MATRIZEDITORIAL_H

#include <string>
#include "SistemaEditorial.h"
using namespace std;

class Editorial {

private:

    int sucursales;
    int anios;
    LibroEditorial ***m;

public:
    Editorial(int sucursales, int anios);
    ~Editorial();

    void agregarLibro(int sucursal, int anioPos, string titulo, string autor, int unidades, double precio, int anioPublicacion);
    double gananciasAutor(string autor);
    int unidadesVendidasAnio(int anioPublicacion);
    LibroEditorial libroBestSeller();
    double gananciasSucursal(int sucursal);
};

#endif //EJERCICIOSMATRICES_MATRIZEDITORIAL_H
