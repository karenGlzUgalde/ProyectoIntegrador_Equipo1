#include "Episodio.h"

#include <iostream>
#include <string>

using namespace std;

// Constructores
Episodio::Episodio()
{
    temporada = 0;
    numEpTemp = 0;
    nombreEp = "";
}

Episodio::Episodio(int temp, int NET, string nom)
{
    temporada = temp;
    numEpTemp = NET;
    nombreEp = nom;
}
// Getters
int Episodio::getTemporada()
{
    return temporada;
}

int Episodio::getNumEpTemp()
{
    return numEpTemp;
}

string Episodio::getNombreEp()
{
    return nombreEp;
}
// Setters
void Episodio::setTemporada(int temp)
{
    temporada = temp;
}

void Episodio::setNumEpTemp(int NET)
{
    numEpTemp = NET;
}

void Episodio::setNombreEp(string nE)
{
    nombreEp = nE;
}