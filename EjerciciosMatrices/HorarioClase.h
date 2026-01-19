#ifndef EJERCICIOSMATRICES_HORARIOCLASE_H
#define EJERCICIOSMATRICES_HORARIOCLASE_H

#include <string>
#include "SistemaHorarioClase.h"
using namespace std;

class HorarioClase {

private:
    static const int DIAS = 7;
    static const int HORAS = 12;
    Clase ***m;

public:
    HorarioClase();
    ~HorarioClase();

    void agregarClase(int dia, int hora, string nombre, string profesor, int inicio, int fin);
    void eliminarClase(int dia, int hora);
    int clasesPorDia(int dia);
    int clasesPorProfesor(string profesor);
    bool hayConflicto(int dia, int hora);
};

#endif //EJERCICIOSMATRICES_HORARIOCLASE_H
