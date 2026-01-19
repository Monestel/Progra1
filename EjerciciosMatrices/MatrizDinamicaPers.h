// Ejercicio 12

#ifndef EJERCICIOSMATRICES_PERSONA_H
#define EJERCICIOSMATRICES_PERSONA_H

#include <string>
using namespace std;

class MatrizDinamicaPers {

private:

    string nombre;
    int edad;

public:
    MatrizDinamicaPers();
    MatrizDinamicaPers(string nombre, int edad);

    string getNombre();
    int getEdad();
};

#endif //EJERCICIOSMATRICES_MATRIZDINAMICAPERS_H
