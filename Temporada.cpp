#include "Temporada.h"

#include <iostream>
#include <string>

using namespace std;

Temporada::Temporada()
{
  numero = 0;
  calificacion = 0;
  faltaCalif = true;
  cantE = 0;
}

Temporada::Temporada(int num, int calif, Episodio * episodios, bool fC, int cant)
{
    numero = num;
    calificacion = calif;
    this->episodios = episodios;
    faltaCalif = fC;
    cantE = cant;
}
// Métodos Propios
void Temporada::muestraEpisodios()
{
  cout << "\nEpisodios disponibles ^^^^^^^^^^^^^^^^^^" << endl;
  for (int i=0; i<cantE; i++)
  {
    cout << "\nEpisodio #" << episodios[i].getNumEpTemp() << endl;
    cout << "Temporada a la que pertence: " << episodios[i].getTemporada() << endl;
    cout << "Nombre del episodio: " << episodios[i].getNombreEp() << endl;
  }
  
}

void Temporada::calificaTemporada(int calif)
{
  faltaCalif = false;
  calificacion = calif;
}