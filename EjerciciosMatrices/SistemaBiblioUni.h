#ifndef EJERCICIOSMATRICES_SISTEMABIBLIOUNI_H
#define EJERCICIOSMATRICES_SISTEMABIBLIOUNI_H

#include <string>
using namespace std;

class Libro {

private:
    string isbn;
    string titulo;
    string autor;
    int anio;
    bool disponible;

public:
    Libro(string i, string t, string a, int an, bool d);

    string getISBN();
    string getAutor();
    int getAnio();
    bool isDisponible();
    void setDisponible(bool d);
};

#endif //EJERCICIOSMATRICES_SISTEMABILIOUNI_H
