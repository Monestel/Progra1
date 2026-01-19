#include "MatrizRegistroAcademico.h"

RegistroAcademico::RegistroAcademico(int e, int ma) {
    estudiantes = e;
    materias = ma;

    m = new Calificacion**[estudiantes];
    for (int i = 0; i < estudiantes; i++) {
        m[i] = new Calificacion*[materias];
        for (int j = 0; j < materias; j++) {
            m[i][j] = nullptr;
        }
    }
}

RegistroAcademico::~RegistroAcademico() {
    for (int i = 0; i < estudiantes; i++) {
        for (int j = 0; j < materias; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

string RegistroAcademico::toString() {
    stringstream ss;
    for (int i = 0; i < estudiantes; i++) {
        for (int j = 0; j < materias; j++) {
            if (m[i][j] != nullptr) {
                ss << m[i][j]->getNota() << "\t";
            } else {
                ss << "0\t";
            }
        }
        ss << endl;
    }
    return ss.str();
}

void RegistroAcademico::limpiar() {
    for (int i = 0; i < estudiantes; i++) {
        for (int j = 0; j < materias; j++) {
            delete m[i][j];
            m[i][j] = nullptr;
        }
    }
}

void RegistroAcademico::agregarCalificacion(int estudiante, int materia, string nombreEst, string nombreMat, double nota, int trimestre) {
    if (estudiante >= 0 && estudiante < estudiantes && materia >= 0 && materia < materias) {
        delete m[estudiante][materia];
        m[estudiante][materia] = new Calificacion(nombreEst, nombreMat, nota, trimestre);
    }
}

double RegistroAcademico::promedioEstudiante(int estudiante) {
    if (estudiante < 0 || estudiante >= estudiantes) {
        return 0;
    }

    double suma = 0;
    int cont = 0;

    for (int j = 0; j < materias; j++) {
        if (m[estudiante][j] != nullptr) {
            suma += m[estudiante][j]->getNota();
            cont++;
        }
    }

    if (cont == 0) {
        return 0;
    }

    return suma / cont;
}

double RegistroAcademico::promedioMateria(int materia) {
    if (materia < 0 || materia >= materias) {
        return 0;
    }

    double suma = 0;
    int cont = 0;

    for (int i = 0; i < estudiantes; i++) {
        if (m[i][materia] != nullptr) {
            suma += m[i][materia]->getNota();
            cont++;
        }
    }

    if (cont == 0) {
        return 0;
    }

    return suma / cont;
}

int RegistroAcademico::mejorEstudiante() {
    double max = -1;
    int indice = -1;

    for (int i = 0; i < estudiantes; i++) {
        double prom = promedioEstudiante(i);
        if (prom > max) {
            max = prom;
            indice = i;
        }
    }
    return indice;
}

int RegistroAcademico::estudiantesAprobados(double notaMinima) {
    int cont = 0;
    for (int i = 0; i < estudiantes; i++) {
        if (promedioEstudiante(i) >= notaMinima) {
            cont++;
        }
    }
    return cont;
}

int RegistroAcademico::materiaMasDificil() {
    double min = -1;
    int indice = -1;

    for (int j = 0; j < materias; j++) {
        double prom = promedioMateria(j);
        if (indice == -1 || prom < min) {
            min = prom;
            indice = j;
        }
    }
    return indice;
}
