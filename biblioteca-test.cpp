//
// Created by stephano on 5/3/19.
//


#include "catch.hpp"
#include "Biblio.h"

SCENARIO("Libros y revistas"){
    GIVEN("Creacion de biblioteca"){
        Biblioteca a;
        REQUIRE(a.mostrarBiblioteca());
        WHEN("agrego 3 libros"){
            auto** a=new Volumen*[4];
            a[0] = new Libro("Hola",3,4);
            a[1] = new Libro("Chau",5,6);
            a[2] = new Libro("Las cronicas de Narnia",3,2);
        }
    }

}