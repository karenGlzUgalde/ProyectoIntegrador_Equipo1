// Proyecto Integrador
// Juan Daniel Rodríguez Oropeza A01411625
// Karen González Ugalde A01411597
// Hector Jesús Ortiz Lejarza A01411730
// Josué Moises Pérez Galindo A01412511
// Emilio Jacob Rivas Monroy A01368205

#include <iostream>
#include <string>

#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Temporada.h"
#include "Episodio.h"
#include "Videoteca.h"

using namespace std;

int main()
{
    // Declaración de Videos
    Video V1("mp4", "Empire", "Cortometraje", 768576, 0, 2019, 1, true, true);

    Video V2("mp4", "Venom", "Accion / Ciencia ficcion", 597618, 0, 2018, 120, true, true);

    Video V3("mp4", "One Day in a Minute", "Documental", 15689, 0, 2014, 5, true, false);

    Video V4("mp4", "Gilmore Girls", "Comedia / Drama", 192076, 0, 2000, 30, true, false);

    // Declaración de Películas
    Pelicula P1("mp4", "Empire", "Cortometraje", 768576, 0, 2019, 1, true, true);

    Pelicula P2("mp4", "Venom", "Accion / Ciencia ficcion", 597618, 0, 2018, 120, true, true);

    Pelicula * peliculas = new Pelicula[2];

    peliculas[0] = P1;
    peliculas[1] = P2;

    // Declaración de Episodios
    Episodio E1T1S1(1,1, "Sydney");
    Episodio E2T1S1(1,13, "Moscu");
    Episodio E1T2S1(2,6, "Barcelona");
    Episodio E2T2S1(2,15, "Tokio");
    Episodio E1T1S2(1,5, "Nuevo Amanecer");
    Episodio E2T1S2(1,3, "Hola, que tal?");
    Episodio E1T2S2(2,1, "Nuevo Anochecer");
    Episodio E2T2S2(2,10, "No tengo idea para un nombre");

    Episodio * episodiosT1S1 = new Episodio[2];

    episodiosT1S1[0] = E1T1S1;
    episodiosT1S1[1] = E2T1S1;

    Episodio * episodiosT2S1 = new Episodio[2];

    episodiosT2S1[0] = E1T2S1;
    episodiosT2S1[1] = E2T2S1;

    Episodio * episodiosT1S2 = new Episodio[2];
    episodiosT1S2[0] = E1T1S2;
    episodiosT1S2[1] = E2T1S2;

    Episodio * episodiosT2S2 = new Episodio[2];
    episodiosT2S2[0] = E1T2S2;
    episodiosT2S2[1] = E2T2S2;

    // Declaracion de Temporadas
    Temporada T1S1(1, 3, episodiosT1S1, false, 2);
    Temporada T2S1(2, 0, episodiosT2S1, true, 2);
    Temporada T1S2(1, 0, episodiosT1S2, true, 2);
    Temporada T2S2(2, 5, episodiosT2S2, false, 2);

    Temporada * temporadasS1 = new Temporada[2];
    temporadasS1[0] = T1S1;
    temporadasS1[1] = T2S1;

    Temporada * temporadasS2 = new Temporada[2];
    temporadasS2[0] = T1S2;
    temporadasS2[1] = T2S2;

    // Declaración de Series
    Serie S1("mp4", "One Day in a Minute", "Documental", 15689, 0, 2014, 5, true, false, 2, temporadasS1);

    Serie S2("mp4", "Gilmore Girls", "Comedia / Drama", 192076, 0, 2000, 30, true, false, 2, temporadasS2);

    Serie * series = new Serie[2];
    series[0] = S1;
    series[1] = S2;

    // Declaración de Videoteca
    Videoteca VideoT(peliculas, series, 2, 2);

    VideoT.muestraDatos();

    cout << "\n\nComo puede notar, hay algunas peliculas y series que no tienen calificacion. Primero se aniadiran calificacion a las peliculas que no tienen, que en este caso son todas." << endl;

    P1.calificaPelicula(3);
    P2.calificaPelicula(4);

    peliculas[0] = P1;
    peliculas[1] = P2;

    cout << "\nChequemos nuevamente las calificaciones de las peliculas." << endl;
    VideoT.muestraDatos(true);

    cout << "\n\nAhora califiquemos las series, pero para ello hay que calificar primero a las temporadas que no tienen ponderación.\nEn este caso es la Temporada #2 de la Serie #1 y la Temporada #1 de la Serie #2." << endl;

    T2S1.calificaTemporada(2);
    T1S2.calificaTemporada(5);
    
    S1.calculaCalificacion();
    S2.calculaCalificacion();

    temporadasS1[0] = T1S1;
    temporadasS1[1] = T2S1;

    temporadasS2[0] = T1S2;
    temporadasS2[1] = T2S2;

    series[0] = S1;
    series[1] = S2;

    cout << "\nAhora chequemos nuevamente las calificaciones de las series y sus temporadas." << endl;

    VideoT.muestraDatos(false);

    cout << "\n\nAhora porbaremos mostar la pelicula o serie por ID seleccionado." << endl;

    VideoT.muestraDatos(597618); // Sí existe
    cout << endl;
    VideoT.muestraDatos(192076); // Sí existe
    cout << endl;
    VideoT.muestraDatos(1515); // No existe

    int opcion;
    cout << "\n\nAhora intente introducir el ID de alguna pelicula o serie: ";
    cin >> opcion;
    VideoT.muestraDatos(opcion);
    
    cout << "\n\nPrograma creado por: " << endl;
    cout << "\nJuan Daniel Rodriguez Oropeza A01411625" << endl;
    cout << "\nKaren Gonzalez Ugalde A01411597" << endl;
    cout << "\nHector Jesús Ortiz Lejarza A01411730" << endl;
    cout << "\nJosue Moises Perez Galindo A01412511" << endl;
    cout << "\nEmilio Jacob Rivas Monroy A01368205" << endl;

    return 0;
}
