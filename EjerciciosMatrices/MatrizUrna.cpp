#include "MatrizUrna.h"

Urna::Urna(int me, int ca) {
    mesas = me;
    candidatos = ca;

    m = new Voto**[mesas];
    for (int i = 0; i < mesas; i++) {
        m[i] = new Voto*[candidatos];
        for (int j = 0; j < candidatos; j++) {
            m[i][j] = nullptr;
        }
    }
}

Urna::~Urna() {
    for (int i = 0; i < mesas; i++) {
        for (int j = 0; j < candidatos; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

string Urna::toString() {
    stringstream ss;
    for (int i = 0; i < mesas; i++) {
        for (int j = 0; j < candidatos; j++) {
            if (m[i][j] != nullptr) {
                ss << m[i][j]->getCandidato() << "\t";
            } else {
                ss << "0\t";
            }
        }
        ss << endl;
    }
    return ss.str();
}

void Urna::limpiar() {
    for (int i = 0; i < mesas; i++) {
        for (int j = 0; j < candidatos; j++) {
            delete m[i][j];
            m[i][j] = nullptr;
        }
    }
}

void Urna::registrarVoto(int mesa, int candidato, string nombreCandidato, string fecha) {
    if (mesa >= 0 && mesa < mesas && candidato >= 0 && candidato < candidatos) {
        delete m[mesa][candidato];
        m[mesa][candidato] = new Voto(nombreCandidato, fecha);
    }
}

int Urna::votosPorCandidato(int candidato) {
    if (candidato < 0 || candidato >= candidatos) {
        return 0;
    }

    int cont = 0;
    for (int i = 0; i < mesas; i++) {
        if (m[i][candidato] != nullptr) {
            cont++;
        }
    }
    return cont;
}

int Urna::votosPorMesa(int mesa) {
    if (mesa < 0 || mesa >= mesas) {
        return 0;
    }

    int cont = 0;
    for (int j = 0; j < candidatos; j++) {
        if (m[mesa][j] != nullptr) {
            cont++;
        }
    }
    return cont;
}

int Urna::candidatoGanador() {
    int max = -1;
    int indice = -1;

    for (int j = 0; j < candidatos; j++) {
        int votos = votosPorCandidato(j);
        if (votos > max) {
            max = votos;
            indice = j;
        }
    }
    return indice;
}

int Urna::totalVotos() {
    int total = 0;
    for (int i = 0; i < mesas; i++) {
        for (int j = 0; j < candidatos; j++) {
            if (m[i][j] != nullptr) {
                total++;
            }
        }
    }
    return total;
}
