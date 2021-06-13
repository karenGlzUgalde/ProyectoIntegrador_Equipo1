#ifndef VIDEOTECA_H
#define VIDEOTECA_H

#include <iostream>
#include <string>

#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Temporada.h"
#include "Episodio.h"

using namespace std;

class Videoteca
{
    public:
        Videoteca();
        Videoteca(Pelicula * peliculas, Serie * series, int, int);
        // Métodos Propios
        void muestraDatos();
        void muestraDatos(bool);
        void muestraDatos(int);
    public:
      Pelicula * peliculas;
      Serie * series;
      int cantPelis;
      int cantSeries;
};

#endif // VIDEO_H
