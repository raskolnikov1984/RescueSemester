#ifndef JUGADOR_H
#define JUGADOR_H

#include <QGraphicsItem>
#include <QPainter>

#include <iostream>
using namespace std;

// Clase Jugador
class Jugador: public QGraphicsItem {
private:
    int puntaje;
protected:
    int x, y;
    int antX, antY;

public:
    Jugador();
    void avanzar();
    void retroceder();
    void saltar();
    void caer();
    void aumentarPuntaje(int puntos);
    int getPuntaje();
    int getJugadorX();
    int getJugadorY();
    void entradaUsuario();
    void regresarPosicionSegura();
};
#endif // JUGADOR_H
