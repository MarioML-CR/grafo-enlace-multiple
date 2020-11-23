//
// Created by Mario Martinez on 23/11/20.
//

#ifndef GRAFO_ENLACE_MULTIPLE_GESTOR_H
#define GRAFO_ENLACE_MULTIPLE_GESTOR_H

#include "../bl/Grafo.h"

class Gestor {
public:
    Gestor();

    Grafo *getGrafo() const;

    void setGrafo(Grafo *grafo);

    void insertVertice(int valor, string nombre);

    string insertaArista(string salida, string llegada, int peso);

    void listaAdyacencia();

    void eliminarArista(string salida, string llegada);

    string eliminarVertice(string vertice);

    void eliminarGrafo();

    int numVertices();

    bool vacio() const;

    void recorridoAnchura(string pOrigen);

    void recorridoProfundidad(string pOrigen);

    void primeroAnchura(string pOrigen, string pDestino);

    void primeroProfundidad(string pOrigen, string pDestino);

    void dijkstra(string pOrigen, string pDestino);
private:
    Grafo *grafo;
};

#endif //GRAFO_ENLACE_MULTIPLE_GESTOR_H
