//Ejercicio 24

#ifndef EJERCICIOSMATRICES_SISTEMAEDITORIAL_H
#define EJERCICIOSMATRICES_SISTEMAEDITORIAL_H

#include <string>
using namespace std;

class LibroEditorial {

private:

    string titulo;
    string autor;
    int unidadesVendidas;
    double precioUnitario;
    int anio;

public:
    LibroEditorial();
    LibroEditorial(string titulo, string autor, int unidades, double precio, int anio);

    string getTitulo();
    string getAutor();
    int getUnidadesVendidas();
    double getPrecioUnitario();
    int getAnio();
    double ganancias();
};

#endif //EJERCICIOSMATRICES_SISTEMAEDITORIAL_H
