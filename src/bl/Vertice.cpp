//
// Created by Mario Martinez on 23/11/20.
//

#include "Vertice.h"

Vertice::Vertice(int indice, const string &nombre, Vertice *sig, Arista *ady): indice(indice), nombre(nombre), next(sig),
                                                                               ady(ady) {
    setIndice(indice);
    setNombre(nombre);
}

Vertice::~Vertice() {

}

const string &Vertice::getNombre() const {
    return nombre;
}

void Vertice::setNombre(const string &nombre) {
    Vertice::nombre = nombre;
}

Vertice *Vertice::getNext() const {
    return next;
}

void Vertice::setNext(Vertice *next) {
    Vertice::next = next;
}

Arista *Vertice::getAdy() const {
    return ady;
}

void Vertice::setAdy(Arista *ady) {
    Vertice::ady = ady;
}

int Vertice::getIndice() const {
    return indice;
}

void Vertice::setIndice(int indice) {
    Vertice::indice = indice;
}

