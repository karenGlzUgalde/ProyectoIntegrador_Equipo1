#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
using namespace std;

class Video{
    public:
        string tipoVideo, nombreVideo, genero;
        double calificacion;
        int anioLanzamiento;
        Video(string, string, string, int);
        Video(string, string, string, double, int);
        void calificaVideo(double);
        virtual void muestraDatos();
};

#endif