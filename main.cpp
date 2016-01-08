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
/*
    Cola* cola = new Cola();
    cola->enqueue(new Vertice("A"));
    cola->enqueue(new Vertice("B"));
    cola->enqueue(new Vertice("C"));

    Vertice* i = cola -> dequeue();
    while(i)
    {
        cout << i->getNombre() << endl;
        i = cola -> dequeue();
    }

*/

    return 0;
}
