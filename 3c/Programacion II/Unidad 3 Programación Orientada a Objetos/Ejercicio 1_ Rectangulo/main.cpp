#include <iostream>

#include "Rectangulo.h"

using namespace std;
/*

Crea una clase llamada Rectangulo que represente un rectángulo.
La clase debe tener dos atributos correspondientes a la base y altura.
Implementa las siguientes metodos:
Getters y Setter de cada atributo.
calcularArea(): Devuelve el área del rectángulo.
calcularPerimetro(): Devuelve el perímetro del rectángulo.


*/

int main()
{

	Rectangulo rec1(10,20);


	cout << "Rectangulo 1 " << endl;
	cout << "Base:      " << rec1.getBase()<< endl;
	cout << "Altura:    " << rec1.getAltura()<< endl;
	cout << "Area:      " << rec1.calcularArea() << endl;
	cout << "Perímetro: " << rec1.calcularPerimetro()<< endl;


    return 0;
}
