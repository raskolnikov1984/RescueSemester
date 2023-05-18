#include "mainwindow.h"
#include "mapajuego.h"
#include "jugador.h"
#include <QApplication>


int main(int argc, char *argv[])
{
//    bool isGameOver = false;
//    int posicionX, posicionY;

//    Jugador jugador;
//    MapaJuego mapa;

//    mapa.dibujarIntro();

//    while(isGameOver == false){
//        //Pedir Movimiento del Jugador
//        jugador.entradaUsuario();
//        //Actualizar Posición del Jugador
//        posicionX = jugador.getJugadorX();
//        posicionY = jugador.getJugadorY();
//        if(mapa.setJugadorCelda(posicionX, posicionY))
//        {
//            mapa.dibujar();
//        }else{
//            jugador.regresarPosicionSegura();
//            mapa.dibujar();
//        }
//    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
