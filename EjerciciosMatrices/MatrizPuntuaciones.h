//Ejercicio 5

#ifndef EJERCICIOSMATRICES_MATRIZPUNTUACIONES_H
#define EJERCICIOSMATRICES_MATRIZPUNTUACIONES_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizPuntuaciones {

private:

    static const int ESTUDIANTES= 5;
    static const int EXAMENES= 3;
    int m[ESTUDIANTES][EXAMENES];

public:
    /*
    agregarPuntuacion(int estudiante, int examen, double puntuacion)
promedioEstudiante(int estudiante): retorna el promedio de un estudiante
promedioExamen(int examen): retorna el promedio de un examen
mejorEstudiante(): retorna el índice del estudiante con mejor promedio
    */

    MatrizPuntuaciones();
    string toString();
    void limpiar();
    void agregarPuntuacion(int estudiante, int examen, double puntuacion);
    double promedioEstudiante(int estudiante);
    double promedioExamen(int examen);
    int mejoorEstudiante();
};


#endif //EJERCICIOSMATRICES_MATRIZPUNTUACIONES_H