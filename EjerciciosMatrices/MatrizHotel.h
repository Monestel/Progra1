#ifndef EJERCICIOSMATRICES_MATRIZHOTEL_H
#define EJERCICIOSMATRICES_MATRIZHOTEL_H

#include <string>
#include "SistemaHotel.h"
using namespace std;

class Hotel {

private:

    int filas;
    int columnas;
    Habitacion ***m;

public:
    Hotel(int filas, int columnas);
    ~Hotel();

    void reservarHabitacion(int fila, int columna, int numero, string tipo, double precio);
    void liberarHabitacion(int fila, int columna);
    int habitacionesDisponibles();
    double ingresosTotales();
    Habitacion habitacionMasCara();
};

#endif //EJERCICIOSMATRICES_MATRIZHOTEL_H
