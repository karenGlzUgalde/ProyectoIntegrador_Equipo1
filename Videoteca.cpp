#include "Videoteca.h"

#include <iostream>
#include <string>


using namespace std;

Videoteca::Videoteca()
{
    cantPelis = 0;
    cantSeries = 0;
}

Videoteca::Videoteca(Pelicula * peliculas, Serie * series, int cantP, int cantS)
{
    this->peliculas = peliculas;
    this->series = series;
    cantPelis = cantP;
    cantSeries = cantS;
}

void Videoteca::muestraDatos()
{
    cout << "\nDatos de la VideoTeca" << endl;
    cout << "=========================================" << endl;
    cout << "\nPeliculas" << endl;
    cout << "---------------------------------------" << endl;
    for (int i=0; i<cantPelis; i++)
    {
      cout << "\nPelicula #" << i+1 << endl;
      if (peliculas[i].getPeliOSerie() == true)
      {
          cout << "\nEs pelicula o serie?: " << "Pelicula" << endl;
      }
      else
      {
          cout << "\nEs pelicula o serie?: " << "Serie" << endl;
      }
      cout << "Tipo de Video: " << peliculas[i].getTipoVideo() << endl;
      if (peliculas[i].getPeliOSerie() == true)
      {
          cout << "Nombre de la pelicula: " << peliculas[i].getNombreVideo() << endl;
      }
      else
      {
          cout << "Nombre de la serie: " << peliculas[i].getNombreVideo() << endl;
      }
      cout << "Genero: " << peliculas[i].getGenero() << endl;
      cout << "Id:" << peliculas[i].getId() << endl;
      if (peliculas[i].getPendCalif() == true)
      {
          cout << "Calificacion pendiente" << endl;
      }
      else
      {
          cout << "Calificacion: " << peliculas[i].getCalificacion() << " estrellas" << endl;
      }
      cout << "Anio de Lanzamiento: " << peliculas[i].getAnioLanzamiento() << endl;
      cout << "Duracion: " << peliculas[i].getDuracion() << " minutos" << endl;
    }

    cout << "\nSeries" << endl;
    cout << "---------------------------------------" << endl;
    for (int i=0; i<cantSeries; i++)
    {
      cout << "\nSerie #" << i+1 << endl;
      if (series[i].getPeliOSerie() == true)
      {
          cout << "\nEs pelicula o serie?: " << "Pelicula" << endl;
      }
      else
      {
          cout << "\nEs pelicula o serie?: " << "Serie" << endl;
      }
      cout << "Tipo de Video: " << series[i].getTipoVideo() << endl;
      if (series[i].getPeliOSerie() == true)
      {
          cout << "Nombre de la pelicula: " << series[i].getNombreVideo() << endl;
      }
      else
      {
          cout << "Nombre de la serie: " << series[i].getNombreVideo() << endl;
      }
      cout << "Genero: " << series[i].getGenero() << endl;
      cout << "Id:" << series[i].getId() << endl;
      if (series[i].getPendCalif() == true)
      {
          cout << "Calificacion pendiente" << endl;
      }
      else
      {
          cout << "Calificacion: " << series[i].getCalificacion() << " estrellas" << endl;
      }
      cout << "Anio de Lanzamiento: " << series[i].getAnioLanzamiento() << endl;
      cout << "Duracion de toda la serie: " << series[i].getDuracion() << " minutos" << endl;

      series[i].muestraTemporadas();
    }
}

void Videoteca::muestraDatos(bool bol)
{
    cout << "\nDatos de la VideoTeca" << endl;
    cout << "=========================================" << endl;
    if (bol == true)
    {
      cout << "\nPeliculas" << endl;
      cout << "---------------------------------------" << endl;
      for (int i=0; i<cantPelis; i++)
      {
        cout << "\nPelicula #" << i+1 << endl;
        if (peliculas[i].getPeliOSerie() == true)
        {
          cout << "\nEs pelicula o serie?: " << "Pelicula" << endl;
        }
        else
        {
          cout << "\nEs pelicula o serie?: " << "Serie" << endl;
        }
        cout << "Tipo de Video: " << peliculas[i].getTipoVideo() << endl;
        if (peliculas[i].getPeliOSerie() == true)
        {
          cout << "Nombre de la pelicula: " << peliculas[i].getNombreVideo() << endl;
        }
        else
        {
          cout << "Nombre de la serie: " << peliculas[i].getNombreVideo() << endl;
        }
        cout << "Genero: " << peliculas[i].getGenero() << endl;
        cout << "Id:" << peliculas[i].getId() << endl;
        if (peliculas[i].getPendCalif() == true)
        {
          cout << "Calificacion pendiente" << endl;
        }
        else
        {
          cout << "Calificacion: " << peliculas[i].getCalificacion() << " estrellas" << endl;
        }
        cout << "Anio de Lanzamiento: " << peliculas[i].getAnioLanzamiento() << endl;
        cout << "Duracion: " << peliculas[i].getDuracion() << " minutos" << endl;
      }
    }
    else
    {
      cout << "\nSeries" << endl;
      cout << "---------------------------------------" << endl;
      for (int i=0; i<cantSeries; i++)
      {
        cout << "\nSerie #" << i+1 << endl;
        if (series[i].getPeliOSerie() == true)
        {
          cout << "\nEs pelicula o serie?: " << "Pelicula" << endl;
        }
        else
        {
          cout << "\nEs pelicula o serie?: " << "Serie" << endl;
        }
        cout << "Tipo de Video: " << series[i].getTipoVideo() << endl;
        if (series[i].getPeliOSerie() == true)
        {
          cout << "Nombre de la pelicula: " << series[i].getNombreVideo() << endl;
        }
        else
        {
          cout << "Nombre de la serie: " << series[i].getNombreVideo() << endl;
        }
        cout << "Genero: " << series[i].getGenero() << endl;
        cout << "Id:" << series[i].getId() << endl;
        if (series[i].getPendCalif() == true)
        {
          cout << "Calificacion pendiente" << endl;
        }
        else
        {
          cout << "Calificacion: " << series[i].getCalificacion() << " estrellas" << endl;
        }
        cout << "Anio de Lanzamiento: " << series[i].getAnioLanzamiento() << endl;
        cout << "Duracion de toda la serie: " << series[i].getDuracion() << " minutos" << endl;

        series[i].muestraTemporadas();
      }
    }
}

void Videoteca::muestraDatos(int ide)
{
  bool siHay = false;
  for (int i=0; i<cantPelis; i++)
  {
    if (ide == peliculas[i].getId())
    {
      siHay = true;
      cout << "\nPelicula seleccionada" << endl;
      if (peliculas[i].getPeliOSerie() == true)
        {
          cout << "\nEs pelicula o serie?: " << "Pelicula" << endl;
        }
        else
        {
          cout << "\nEs pelicula o serie?: " << "Serie" << endl;
        }
        cout << "Tipo de Video: " << peliculas[i].getTipoVideo() << endl;
        if (peliculas[i].getPeliOSerie() == true)
        {
          cout << "Nombre de la pelicula: " << peliculas[i].getNombreVideo() << endl;
        }
        else
        {
          cout << "Nombre de la serie: " << peliculas[i].getNombreVideo() << endl;
        }
        cout << "Genero: " << peliculas[i].getGenero() << endl;
        cout << "Id:" << peliculas[i].getId() << endl;
        if (peliculas[i].getPendCalif() == true)
        {
          cout << "Calificacion pendiente" << endl;
        }
        else
        {
          cout << "Calificacion: " << peliculas[i].getCalificacion() << " estrellas" << endl;
        }
        cout << "Anio de Lanzamiento: " << peliculas[i].getAnioLanzamiento() << endl;
        cout << "Duracion: " << peliculas[i].getDuracion() << " minutos" << endl;
      }
    }
  
  for (int i=0; i<cantSeries; i++)
  {
    if (ide == series[i].getId())
    {
      siHay = true;
      {
        cout << "\nSerie #" << i+1 << endl;
        if (series[i].getPeliOSerie() == true)
        {
          cout << "\nEs pelicula o serie?: " << "Pelicula" << endl;
        }
        else
        {
          cout << "\nEs pelicula o serie?: " << "Serie" << endl;
        }
        cout << "Tipo de Video: " << series[i].getTipoVideo() << endl;
        if (series[i].getPeliOSerie() == true)
        {
          cout << "Nombre de la pelicula: " << series[i].getNombreVideo() << endl;
        }
        else
        {
          cout << "Nombre de la serie: " << series[i].getNombreVideo() << endl;
        }
        cout << "Genero: " << series[i].getGenero() << endl;
        cout << "Id:" << series[i].getId() << endl;
        if (series[i].getPendCalif() == true)
        {
          cout << "Calificacion pendiente" << endl;
        }
        else
        {
          cout << "Calificacion: " << series[i].getCalificacion() << " estrellas" << endl;
        }
        cout << "Anio de Lanzamiento: " << series[i].getAnioLanzamiento() << endl;
        cout << "Duracion de toda la serie: " << series[i].getDuracion() << " minutos" << endl;

        series[i].muestraTemporadas();
      }
    }
  }

  if (siHay == false)
  {
    cout << "\nLa pelicula o serie que solicito no existe." << endl;
  }
}