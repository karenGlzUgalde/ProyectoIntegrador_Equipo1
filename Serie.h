#ifndef SERIE_H
#define SERIE_H

#include "Video.h"
#include "Temporada.h"

#include <iostream>
#include <string>

using namespace std;

class Serie : public Video
{
    
    public:
        // Constructores
        Serie();
        Serie(string, string, string, int, int, int, int, bool, bool, int, Temporada * temporadas);
        // Getters
        int getCantTemporadas();
        // Setters
        void setCantTemporadas(int);
        // Métodos propios
        void muestraTemporadas();
        void calculaCalificacion();
    protected:
        int cantTemporadas;
        Temporada * temporadas;
};

#endif // SERIE_H