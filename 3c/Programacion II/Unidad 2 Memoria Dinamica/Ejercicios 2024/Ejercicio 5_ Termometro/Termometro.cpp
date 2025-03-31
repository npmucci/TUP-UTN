#include <iostream>
#include "Termometro.h"
using namespace std;

Termometro::Termometro(float temperatura, char unidad)
{
    _temperatura=temperatura;
    _unidad=unidad;

}
float Termometro::getTemperatura()
{
    return _temperatura;
}
void Termometro::setTemperatura(float temperatura)
{
    _temperatura=temperatura;
}
void Termometro::cambiarUnidad(char nuevaUnidad)
{
    ///Fahrenheit a Celsius  : (F - 32)* 5/9
    ///Celsius a Fahrenheit: (C * 9/5)+ 32
    if(_unidad!= nuevaUnidad)
    {
        if(nuevaUnidad=='C')
        {
            setTemperatura((getTemperatura()-32)*(5.0/9.0));
            setUnidad('C');
        }
        else
        {
            setTemperatura((getTemperatura()*(9.0/5.0))+32);
            setUnidad('F');
        }
    }

}
 void Termometro::setUnidad(char unidad)
 {
     _unidad=unidad;
 }
char Termometro::getUnidad()
{
    return _unidad;
}
