#ifndef VERTICE_H
#define VERTICE_H
#include <string>

class Vertice
{
    public:
        Vertice(std::string nombre);
        virtual ~Vertice();
        void agregarAdyacencia(Vertice* vertice);
        int getDistancia();
        std::string getNombre();
    private:
        std::string _nombre;
        Vertice* _primer;
        Vertice* _ultimo;
        Vertice* _siguienteAdyacente;
        Vertice* _siguiente;
        Vertice* _ruta;
        int _distancia;
        friend class Cola;
        friend class Grafo;
};

#endif // VERTICE_H
