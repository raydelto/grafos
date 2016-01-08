#ifndef COLA_H
#define COLA_H
#include "Vertice.h"

class Cola
{
    public:
        Cola();
        void enqueue(Vertice* vertice);
        Vertice* dequeue();
        virtual ~Cola();
        bool estaVacia();
    private:
        Vertice* _primer;
        Vertice* _ultimo;
        int _tamano;

};

#endif // COLA_H
