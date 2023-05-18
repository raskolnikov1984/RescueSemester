#include "jugador.h"

Jugador::Jugador()
{
   puntaje = 0;
   x = 1;
   y = 1;
}
void Jugador::avanzar() {
    // Lógica para avanzar a la derecha
    x += 1;
}

void Jugador::retroceder() {
    // Lógica para retroceder a la izquierda
    x -= 1;
}

void Jugador::saltar() {
    // Lógica para saltar
    y -= 1;
}

void Jugador::caer() {
    // Lógica para caer
    y += 1;
}

void Jugador::aumentarPuntaje(int puntos) {
    puntaje += puntos;
}

int Jugador::getPuntaje(){
    return puntaje;
}

int Jugador::getJugadorX(){
    return x;
}

int Jugador::getJugadorY(){
    return y;
}

void Jugador::entradaUsuario(){
    char entrada = ' ';
    cin>>entrada;

    switch(entrada)
    {
    case '6':
        antX = getJugadorX();
        avanzar();
        //cout << "El jugador Avanza"<<endl;
        break;
    case '4':
        antX = getJugadorX();
        retroceder();
        //cout << "El jugador Retrocede"<<endl;
        break;
    case '8':
        antY = getJugadorY();
        saltar();
        //cout << "El jugador Salta"<<endl;
        break;
    case '2':
        antY = getJugadorY();
        caer();
        //cout << "El jugador Cae"<<endl;
        break;
    }
}

void Jugador::regresarPosicionSegura(){
    x = antX;
    y = antY;
}
