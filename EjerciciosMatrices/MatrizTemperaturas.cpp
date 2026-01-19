// Ejercicio 6
#include "MatrizTemperaturas.h"

MatrizTemperaturas::MatrizTemperaturas() {
    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < CIUDADES; j++) {
            m[i][j] = 0.0;
        }
    }
}

void MatrizTemperaturas::registrarTemperatura(int dia, int ciudad, double temp) {
    if (dia >= 0 && dia < DIAS && ciudad >= 0 && ciudad < CIUDADES) {
        m[dia][ciudad] = temp;
    }
}

double MatrizTemperaturas::temperaturaPromedioCiudad(int ciudad) {
    if (ciudad < 0 || ciudad >= CIUDADES) {
        return 0;
    }

    double suma = 0;
    for (int i = 0; i < DIAS; i++) {
        suma += m[i][ciudad];
    }

    return suma / DIAS;
}

int MatrizTemperaturas::diaMasCaliente() {
    int diaMax = 0;
    double maxPromedio = -1e9;

    for (int i = 0; i < DIAS; i++) {
        double suma = 0;
        for (int j = 0; j < CIUDADES; j++) {
            suma += m[i][j];
        }
        double promedio = suma / CIUDADES;

        if (promedio > maxPromedio) {
            maxPromedio = promedio;
            diaMax = i;
        }
    }

    return diaMax;
}

int MatrizTemperaturas::ciudadMasFria() {
    int ciudadMin = 0;
    double minPromedio = 1e9;

    for (int j = 0; j < CIUDADES; j++) {
        double suma = 0;
        for (int i = 0; i < DIAS; i++) {
            suma += m[i][j];
        }
        double promedio = suma / DIAS;

        if (promedio < minPromedio) {
            minPromedio = promedio;
            ciudadMin = j;
        }
    }

    return ciudadMin;
}

string MatrizTemperaturas::toString() {
    stringstream ss;
    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < CIUDADES; j++) {
            ss << m[i][j] << "\t";
        }
        ss << endl;
    }
    return ss.str();
}
