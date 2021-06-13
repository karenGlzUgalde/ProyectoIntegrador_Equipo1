#ifndef PELICULA_H
#define PELICULA_H

#include "Video.h"

#include <iostream>
#include <string>

using namespace std;

class Pelicula : public Video
{
    public:
        Pelicula();
        Pelicula(string, string, string, int, int, int, int, bool, bool);
        void calificaPelicula(int);
};

#endif // PELICULA_H
