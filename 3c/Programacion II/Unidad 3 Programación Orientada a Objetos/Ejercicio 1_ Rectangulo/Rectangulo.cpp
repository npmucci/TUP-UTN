
#include <iostream>
#include "Rectangulo.h"

using namespace std;


 Rectangulo::Rectangulo(int b, int a){
	_base=b;
	_altura=a;

 }

 int Rectangulo::getBase(){
	return _base;

 }

 int Rectangulo::getAltura(){
	return _altura;

 }

 void Rectangulo::setAltura(int a){
	_altura = a;
 }

 void Rectangulo::setBase(int b){
	_base= b;

 }

int Rectangulo::calcularArea() {
    return _base * _altura;
}

int Rectangulo::calcularPerimetro() {
    return 2 * (_base + _altura);
}
