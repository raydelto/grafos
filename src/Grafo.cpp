#include "Grafo.h"
#include <iostream>
using namespace std;

Grafo::Grafo()
{
    _cola = new Cola();
}

void Grafo::recorrer(Vertice* inicio)
{
    inicio -> _distancia = 0;
    _cola -> enqueue(inicio);
    Vertice* i;
    Vertice* adyacente;
    while(!_cola -> estaVacia())
    {
        i = _cola -> dequeue();
        adyacente = i->_primer;
        while(adyacente)
        {
            if(adyacente -> _distancia == -1)
            {
                _cola -> enqueue(adyacente);
                adyacente -> _distancia = i -> _distancia + 1;
                adyacente -> _ruta = i;
            }
            adyacente = adyacente -> _siguienteAdyacente;
        }

    }

}


Grafo::~Grafo()
{
    //dtor
}
