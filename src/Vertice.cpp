#include "Vertice.h"
Vertice::Vertice(std::string nombre):_nombre(nombre)
{
    _primer = NULL;
    _ultimo = NULL;
    _siguiente = NULL;
    _siguienteAdyacente = NULL;
    _ruta = NULL;
    _distancia = -1;
}

std::string Vertice::getNombre()
{
    return _nombre;
}


int Vertice::getDistancia()
{
    return _distancia;
}


void Vertice::agregarAdyacencia(Vertice* vertice)
{
    if(!_primer) //verificar si la lista esta vacia
    {
        _primer = _ultimo = vertice;
    }else //Si no esta vacia
    {
        _ultimo -> _siguienteAdyacente = vertice;
        _ultimo = vertice;
    }

}



Vertice::~Vertice()
{
    //dtor
}
