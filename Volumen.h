//
// Created by stephano on 5/3/19.
//

#include <string>
#include <iostream>
#ifndef BIBLIOTECA_VOLUMEN_H
#define BIBLIOTECA_VOLUMEN_H

class Volumen{
protected:
    std::string nombre;
    int numVol;
public:
    Volumen(std::string _nombre, int _numVol);
    virtual void mostrar() = 0;
};

class Revista:public Volumen{
    int numRevista;
public:
    Revista(std::string nombre, int numVol, int _numRevistas);
    void mostrar() override;
};

class Libro:public Volumen{
    int numLibros;
public:
    Libro(std::string nombre, int numVol, int _numLibros);
    void mostrar() override;
};



#endif //BIBLIOTECA_VOLUMEN_H
