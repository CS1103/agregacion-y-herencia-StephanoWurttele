//
// Created by stephano on 5/3/19.
//

#include "Volumen.h"

Volumen::Volumen(std::string _nombre, int _numVol):nombre(_nombre),numVol(_numVol){}

Libro::Libro(std::string _nombre, int _numVol, int _numLibros):Volumen(_nombre,_numVol), numLibros(_numLibros) {}
void Libro::mostrar(){
    std::cout<<"Volumen #"<<numVol<<", Libro#"<<numLibros<<", con titulo "<<nombre<<std::endl;
}


Revista::Revista(std::string _nombre, int _numVol, int _numRevista):Volumen(_nombre,_numVol), numRevista(_numRevista) {}
void Revista::mostrar(){
std::cout<<"Volumen #"<<numVol<<", Revista#"<<numRevista<<", con titulo "<<nombre<<std::endl;
}