#include "Cola.h"
#include <iostream>
using namespace std;

bool Cola::estaVacia()
{
    return !_tamano;
}

Cola::Cola()
{
    _primer = NULL;
    _ultimo = NULL;
    _tamano = 0;
}

void Cola::enqueue(Vertice* vertice)
{
    cout << "Agregando a " << vertice -> _nombre <<endl;
    _tamano++;
    if(_primer == NULL)
    {
        _primer = vertice;
        _ultimo = vertice;
    }else
    {
        _ultimo -> _siguiente = vertice;
        _ultimo = vertice;
    }
}

Vertice* Cola::dequeue()
{
    if(_primer == NULL)
    {
        return NULL;
    }


    _tamano--;
    Vertice* temp = _primer;
    cout << "Removiendo a " << temp -> _nombre <<endl;
    _primer = _primer -> _siguiente;
    return temp;
}

Cola::~Cola()
{
    //dtor
}
