#include <iostream>
#include "Triangulo.h"
using namespace std;

/*

Crea una clase llamada Triangulo que represente un triángulo.
La clase debe contener un vector de 3 elementos, donde cada elemento corresponde a la
longitud de un lado del triángulo. Implementa los siguientes métodos:
●	getLado(int numero): Devuelve la longitud del valor del lado correspondiente al número
 proporcionado (1, 2, o 3). Si el número es incorrecto (fuera del rango 1-3), devuelve cero.
●	setLado(int numero, float valor): Establece el valor del lado correspondiente al número
proporcionado (1, 2, o 3). Si el número es incorrecto (fuera del rango 1-3), no realiza ninguna acción.
●	getTipo(): Devuelve el tipo de triángulo según sus lados:
○	1 para un triángulo equilátero (todos los lados iguales).
○	2 para un triángulo isósceles (dos lados iguales).
○	3 para un triángulo escaleno (todos los lados diferentes).
●	isEscaleno(): Devuelve true si el triángulo es escaleno, false en caso contrario.
●	isIsosceles(): Devuelve true si el triángulo es isósceles, false en caso contrario.
●	isEquilatero(): Devuelve true si el triángulo es equilátero, false en caso contrario.

*/

Triangulo::Triangulo(){
}

Triangulo::Triangulo(float lado1, float lado2, float lado3){
    setLado(1,lado1);
    setLado(2,lado2);
    setLado(3,lado3);


}
float Triangulo::getLado(int numero) {
        if (numero >= 1 && numero <= 3) {
            return _lados[numero - 1]; // Ajuste por índice (1,2,3) a (0,1,2)
        }
        return 0.0; //
    }


void Triangulo::setLado(int numero, float valor)
{
    if(numero >=1 && numero<=3)
    {
        _lados[numero-1]=valor;
    }

}

int Triangulo::getTipo()
{
    if(isEquilatero())
    {
        return 1;
    }
    else if (isIsosceles())
    {
        return 2;
    }
    else
    {
        return 3;
    }

}
bool Triangulo::esEscaleno()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (_lados[i] == _lados[j])
            {
                return false;
            }
        }
    }
    return true;
}

bool Triangulo::isIsosceles()
{
    if ((_lados[0] == _lados[1] && _lados[0] != _lados[2]) ||
            (_lados[0] == _lados[2] && _lados[0] != _lados[1]) ||
            (_lados[1] == _lados[2] && _lados[1] != _lados[0]))
    {
        return true;
    }
    return false;
}

bool Triangulo::isEquilatero()
{
    if (_lados[0] == _lados[1] && _lados[0] == _lados[2])
    {
        return true;
    }
    return false;
}
