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
        cout << "Recorriendo adyacentes a " << i -> _nombre << endl;
        while(adyacente)
        {
            if(adyacente -> _distancia == -1)
            {
                _cola -> enqueue(adyacente);
                adyacente -> _distancia = i -> _distancia + 1;
                adyacente -> _ruta = i;
                cout << "Nodo = "<< adyacente -> _nombre << " distancia = " << adyacente -> _distancia << endl;

            }else
            {
                cout << "<VISITADO> Nodo = "<< adyacente -> _nombre << " distancia = " << adyacente -> _distancia << endl;
            }
            adyacente = adyacente -> _siguienteAdyacente;
        }

    }

}


Grafo::~Grafo()
{
    //dtor
}
