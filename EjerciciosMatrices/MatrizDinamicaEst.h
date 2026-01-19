#ifndef MATRIZDINAMICAEST_H
#define MATRIZDINAMICAEST_H

#include <string>
using namespace std;

class MatrizDinamicaEst {

private:

    string nombre;
    double calificaciones[5];

public:
    MatrizDinamicaEst();
    MatrizDinamicaEst(string nombre, double calificaciones[]);

    string getNombre();
    double promedio();
};

#endif //EJERCICIOSMATRICES_MATRIZDINAMICAEST_H
