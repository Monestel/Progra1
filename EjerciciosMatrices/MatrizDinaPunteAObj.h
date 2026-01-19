#ifndef MATRIZPUNTEAOBJ_H
#define MATRIZPUNTEAOBJ_H

#include <string>
#include <sstream>
using namespace std;

class MatrizPunterosObj {
private:
    int*** m;
    int filas;
    int columnas;

public:
    MatrizPunterosObj(int filas, int columnas);
    ~MatrizPunterosObj();

    void asignarValor(int fila, int columna, int valor);
    int obtenerValor(int fila, int columna);
    string toString();
};

#endif //EJERCICIOSMATRICES_MATRIZDINAPUNTEAOBJ_H
