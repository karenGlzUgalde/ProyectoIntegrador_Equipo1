#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
#include <string>

using namespace std;

class Episodio
{
    public:
        // Constructores
        Episodio();
        Episodio(int, int, string);
        // Getters
        int getTemporada();
        int getNumEpTemp();
        string getNombreEp();
        // Setters
        void setTemporada(int);
        void setNumEpTemp(int);
        void setNombreEp(string);
    protected:
        int temporada;
        int numEpTemp;
        string nombreEp;
};

#endif // EPISODIO_H
