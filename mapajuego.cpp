#include "mapajuego.h"
#include "celdamapa.h"
#include <fstream>

MapaJuego::MapaJuego()
{
    CeldaJugador = NULL;
    CargarMapaDesdeArchivo();
}

void MapaJuego::dibujarIntro()
{
    string linea;
    int fila = 0;
    ifstream MiArchivo("Intro.txt");
    if(MiArchivo.is_open())
    {
        cout<<"Prueba de Dibujo"<<endl;
        while(getline(MiArchivo, linea))
        {
            cout << linea << endl;
        }
    }
    else{
        cout << "FATAL ERROR: MAP COULD NOT BE LOAD INTRO"<<endl;
    }
}
void MapaJuego::dibujar()
{
    for(int i=0; i < 20; i++)
    {
        for(int j=0; j < 39; j++){
            cout<<celdas[i][j].id;
        }
        cout<< endl;
    }
}

bool MapaJuego::setJugadorCelda(int posicionX, int posicionY)
{
    if(celdas[posicionY][posicionX].esBloqueo() == false)
    {
        if(CeldaJugador != NULL)
        {
            CeldaJugador->id=32;
        }
        CeldaJugador = &celdas[posicionY][posicionX];
        CeldaJugador->id = '8';

        return true;
    }else
    {
        return false;
    }
}

void MapaJuego::CargarMapaDesdeArchivo()
{
    /*ofstream CrearArchivo("Mapa.txt");
    if(CrearArchivo.is_open())
    {

    }else{cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED"<<endl;}*/
    string linea;
    int fila = 0;
    ifstream MiArchivo("Mapa.txt");
    if(MiArchivo.is_open())
    {
        cout<<"Prueba de Dibujo"<<endl;
        while(getline(MiArchivo, linea))
        {
            for(int p = 0; p < linea.length(); p++)
            {
                if(linea[p] == '0'){
                    //cout<<"Es igual";
                    celdas[fila][p].id = 32;
                }else{celdas[fila][p].id = linea[p];}
            }
            fila++;
        }
    }
    else{
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOAD"<<endl;
    }
}

