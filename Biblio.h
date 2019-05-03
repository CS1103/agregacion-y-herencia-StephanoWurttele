//
// Created by stephano on 5/3/19.
//
#include "Volumen.h"
#include "vector"
#ifndef BIBLIOTECA_BIBLIO_H
#define BIBLIOTECA_BIBLIO_H



class Biblioteca{
protected:
    int maxLibros=0;
    int maxRevista=0;
    std::vector<Volumen*> lista;
public:
    void mostrarBiblioteca();
    void incluir(Volumen* a);
};

#endif //BIBLIOTECA_BIBLIO_H
