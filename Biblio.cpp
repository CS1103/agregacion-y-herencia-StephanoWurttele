//
// Created by stephano on 5/3/19.
//

#include "Biblio.h"

void Biblioteca::mostrarBiblioteca() {
    for (int i=0;i<lista.size();i++) {
        lista[i]->mostrar();
    }
}

void Biblioteca::incluir(Volumen *a) {
    lista.push_back(a);
    Libro* var= dynamic_cast<Libro*>(a);
    if(var!= nullptr){
        maxLibros++;
    }
    else{
        maxRevista++;
    }
}