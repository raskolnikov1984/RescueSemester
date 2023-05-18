#include "celdamapa.h"

CeldaMapa::CeldaMapa()
{
    id=32;
}

bool CeldaMapa::esBloqueo()
{
    if(id=='1')
    {
        return true;
    }else{
        return false;}
}
