#include "Pelicula.h"

#include <iostream>
#include <string>

using namespace std;

// Constructores
Pelicula::Pelicula()
{
    tipoVideo = "";
    nombreVideo = "";
    genero = "";
    id = 0;
    calificacion = 0;
    anioLanzamiento = 0;
    duracion = 0;
    pendCalif = false;
}

Pelicula::Pelicula(string tipo, string nombre, string gen, int iD, int calif, int anio, int dur, bool pend, bool PoS/*, stringstream nC*/)
{
    tipoVideo = tipo;
    nombreVideo = nombre;
    genero = gen;
    id = iD;
    calificacion = calif;
    anioLanzamiento = anio;
    duracion = dur;
    pendCalif = pend;
    peliOSerie = PoS;
    //nombreCompleto << nC;
}
// Métodos Heredados
void Pelicula::calificaPelicula(int cal)
{
  pendCalif = false;
  calificacion = cal;
}