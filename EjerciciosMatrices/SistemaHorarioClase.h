//Ejercicio 23

#ifndef EJERCICIOSMATRICES_SISTEMAHORARIOCLASE_H
#define EJERCICIOSMATRICES_SISTEMAHORARIOCLASE_H

#include <string>
using namespace std;

class Clase {

private:

    string nombre;
    string profesor;
    int horaInicio;
    int horaFin;

public:
    Clase();
    Clase(string nombre, string profesor, int horaInicio, int horaFin);

    string getNombre();
    string getProfesor();
    int getHoraInicio();
    int getHoraFin();
};

#endif //EJERCICIOSMATRICES_SISTEMAHORARIOCLASE_H
