#include "Serie.h"

#include <iostream>
#include <string>

using namespace std;

// Constructores
Serie::Serie()
{
    tipoVideo = "";
    nombreVideo = "";
    genero = "";
    id = 0;
    calificacion = 0;
    anioLanzamiento = 0;
    duracion = 0;
    pendCalif = false;
    cantTemporadas = 0;
}

Serie::Serie(string tipo, string nombre, string gen, int iD, int calif, int anio, int dur, bool pend, bool PoS, int cT, Temporada * temporadas)
{
    tipoVideo = tipo;
    nombreVideo = nombre;
    genero = gen;
    id  = iD;
    calificacion = calif;
    anioLanzamiento = anio;
    duracion = dur;
    pendCalif = pend;
    peliOSerie = PoS;
    cantTemporadas = cT;
    this->temporadas = temporadas;
}
// Getters
int Serie::getCantTemporadas()
{
    return cantTemporadas;
}
// Setters
void Serie::setCantTemporadas(int cT)
{
    cantTemporadas = cT;
}
// Métodos Propios
void Serie::muestraTemporadas()
{
  cout << "\nTemporadas +++++++++++++++++" << endl;
  for (int i=0; i<cantTemporadas; i++)
  {
    cout << "\nTemporada #" << temporadas[i].numero << endl;
    if (temporadas[i].faltaCalif == true)
    {
      cout << "Calificacion pendiente" << endl;
    }
    else
    {
      cout << "Calificacion: " << temporadas[i].calificacion << " estrellas" << endl;
    }
    
    temporadas[i].muestraEpisodios();
  }
}

void Serie::calculaCalificacion()
{
  pendCalif = false;
  for (int i=0; i<cantTemporadas; i++)
  {
    if (i == 1)
    {
      calificacion = temporadas[i].calificacion + temporadas[i-1].calificacion;
    }
  }

  calificacion = calificacion / cantTemporadas;
}