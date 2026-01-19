//Ejercicio 5
#include "MatrizPuntuaciones.h"

void MatrizPuntuaciones::limpiar() {
    for (int i = 0; i < ESTUDIANTES; i++) {
        for (int j = 0; j < EXAMENES; j++) {
            m[i][j]=0;
        }
    }
}


string MatrizPuntuaciones::toString() {
    stringstream ss;
    for (int i = 0; i < ESTUDIANTES; i++) {
        for (int j = 0; j < EXAMENES; j++) {
            ss << m[i][j] << "\t";
        }
        ss << endl;
    }
    return ss.str();
}

MatrizPuntuaciones::MatrizPuntuaciones() {
    for (int i = 0; i < ESTUDIANTES; i++) {
        for (int j = 0; j < EXAMENES; j++) {
            m[i][j] = 0;
        }
    }
}

void MatrizPuntuaciones::agregarPuntuacion(int estudiante, int examen, double puntuacion) {
    if (estudiante >= 0 && estudiante < ESTUDIANTES &&
        examen >= 0 && examen < EXAMENES) {
        m[estudiante][examen] = puntuacion;
        }
}

double MatrizPuntuaciones::promedioEstudiante(int estudiante) {
    if (estudiante < 0 || estudiante >= ESTUDIANTES) {
        return 0;
    }

    double suma = 0;
    for (int j = 0; j < EXAMENES; j++) {
        suma += m[estudiante][j];
    }

    return suma / EXAMENES;
}

double MatrizPuntuaciones::promedioExamen(int examen) {
    if (examen < 0 || examen >= EXAMENES) {
        return 0;
    }

    double suma = 0;
    for (int i = 0; i < ESTUDIANTES; i++) {
        suma += m[i][examen];
    }

    return suma / ESTUDIANTES;
}

int MatrizPuntuaciones::mejoorEstudiante() {
    int mejoor = 0;
    double mejorPromedio = promedioEstudiante(0);

    for (int i = 1; i < ESTUDIANTES; i++) {
        double prom = promedioEstudiante(i);
        if (prom > mejorPromedio) {
            mejorPromedio = prom;
            mejoor = i;
        }
    }

    return mejoor;
}







