#include <iostream>
#include "Grafo.h"
using namespace std;

int main()
{
    Vertice* a = new Vertice("A");
    Vertice* b = new Vertice("B");
    Vertice* c = new Vertice("C");
    b->agregarAdyacencia(c);
    b->agregarAdyacencia(a);
    c->agregarAdyacencia(b);
    Grafo* grafo = new Grafo();
    grafo->recorrer(c);
    cout << "La distancia  de A hacia C es de " << a ->getDistancia();


    return 0;
}
