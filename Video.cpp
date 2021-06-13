#include <iostream>
#include "Video.h"
using namespace std;

Video::Video(string _tipo, string _nombre, string _genero, int _anio){
    tipoVideo = _tipo;
    nombreVideo = _nombre;
    genero = _genero;
    calificacion = 0.0;
    anioLanzamiento = _anio;
}

Video::Video(string _tipo, string _nombre, string _genero, double _calif, int _anio){
    tipoVideo = _tipo;
    nombreVideo = _nombre;
    genero = _genero;
    calificacion = _calif;
    anioLanzamiento = _anio;
}

void Video::calificaVideo(double _calif){
    calificacion = _calif;
}

void Video::muestraDatos(){
    cout<<"Tipo de video: "<<tipoVideo<<endl;
    cout<<"Nombre de video: "<<nombreVideo<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Calificacion: "<<calificacion<<endl;
    cout<<"Anio de lanzamiento: "<<anioLanzamiento<<endl;
}

