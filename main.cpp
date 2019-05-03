#include <iostream>
#include "Biblio.h"
int main() {
    Biblioteca a;
    Revista *b=new Revista("hola",1,1);
    a.incluir(b);
    Libro *c=new Libro("chau",1,1);
    a.incluir((c));
    a.mostrarBiblioteca();

    delete b;
    delete c;
    return 0;
}