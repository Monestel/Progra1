//Ejercicio 15

#ifndef MATRIZDINAMICALIBRO_H
#define MATRIZDINAMICALIBRO_H

#include <string>
using namespace std;

class MatrizDinamicaLibro {

private:

    string titulo;
    string autor;
    int anio;

public:
    MatrizDinamicaLibro();
    MatrizDinamicaLibro(string titulo, string autor, int anio);

    string getTitulo();
    string getAutor();
    int getAnio();
};

#endif //EJERCICIOSMATRICES_MATRIZDINAMICALIBRO_H
