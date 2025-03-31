#include <iostream>

#include "Rectangulo.h"

using namespace std;
/*

Crea una clase llamada Rectangulo que represente un rect�ngulo.
La clase debe tener dos atributos correspondientes a la base y altura.
Implementa las siguientes metodos:
Getters y Setter de cada atributo.
calcularArea(): Devuelve el �rea del rect�ngulo.
calcularPerimetro(): Devuelve el per�metro del rect�ngulo.


*/

int main()
{

	Rectangulo rec1(10,20);


	cout << "Rectangulo 1 " << endl;
	cout << "Base:      " << rec1.getBase()<< endl;
	cout << "Altura:    " << rec1.getAltura()<< endl;
	cout << "Area:      " << rec1.calcularArea() << endl;
	cout << "Per�metro: " << rec1.calcularPerimetro()<< endl;


    return 0;
}
