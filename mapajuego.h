#ifndef MAPAJUEGO_H
#define MAPAJUEGO_H

#include "celdamapa.h"
#include <iostream>

using namespace  std;

class MapaJuego
{
public:
    MapaJuego();
    CeldaMapa* CeldaJugador;
    CeldaMapa celdas[20][39];
    void dibujarIntro();
    void dibujar();
    bool setJugadorCelda(int posicionX, int posicionY);
protected:
    void CargarMapaDesdeArchivo();
};

#endif // MAPAJUEGO_H
