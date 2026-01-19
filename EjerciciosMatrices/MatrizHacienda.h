//Ejercicio 25

#ifndef MATRIZHACIENDA_H
#define MATRIZHACIENDA_H

#include "SistemaHacienda.h"

class Hacienda {

private:

    int contribuyentes;
    int anios;
    Declaracion ***m;

public:
    Hacienda(int contribuyentes, int anios);
    ~Hacienda();

    void agregarDeclaracion(int contribuyente, int anio, int id, double monto);
    double totalContribuyente(int contribuyente);
    double totalAnio(int anio);
    int contribuyenteConMayorMonto();
    double promedioAnio(int anio);
};

#endif //EJERCICIOSMATRICES_MATRIZHACIENDA_H
