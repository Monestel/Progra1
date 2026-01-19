#ifndef EJERCICIOSMATRICES_SISTEMAALMACEN_H
#define EJERCICIOSMATRICES_SISTEMAALMACEN_H

#include <string>
using namespace std;

class Articulo {

private:
    string codigo;
    string nombre;
    string categoria;
    int cantidad;
    double precio;

public:
    Articulo(string c, string n, string cat, int cant, double p);

    string getCodigo();
    string getNombre();
    string getCategoria();
    int getCantidad();
    double getPrecio();
};

#endif //EJERCICIOSMATRICES_SISTEMAALMACEN_H
