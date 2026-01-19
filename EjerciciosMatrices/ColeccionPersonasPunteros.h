#ifndef COLECCIONPERSONASPUNTEROS_H
#define COLECCIONPERSONASPUNTEROS_H

#include <string>
#include "MatrizDinamicaPers.h"
using namespace std;

class ColeccionPersonasPunteros {

private:

    MatrizDinamicaPers*** m;
    int filas;
    int columnas;

public:
    ColeccionPersonasPunteros(int filas, int columnas);
    ~ColeccionPersonasPunteros();

    void agregarPersona(int fila, int columna, string nombre, int edad);
    void eliminarPersona(int fila, int columna);
    MatrizDinamicaPers personaMasVieja();
    int contarPersonas();
};

#endif //EJERCICIOSMATRICES_COLECCIONPERSONASPUNTEROS_H
