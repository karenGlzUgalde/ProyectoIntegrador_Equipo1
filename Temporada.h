#ifndef TEMPORADA_H
#define TEMPORADA_H

#include <iostream>
#include <string>

#include "Episodio.h"

using namespace std;

class Temporada
{
    public:
        // Constructores
        Temporada();
        Temporada(int, int, Episodio * episodios, bool, int);
        // Métodos Propios
        void muestraEpisodios();
        void calificaTemporada(int);
    public:
      int numero;
      int calificacion;
      Episodio * episodios;
      bool faltaCalif;
      int cantE;
};

#endif // VIDEO_H