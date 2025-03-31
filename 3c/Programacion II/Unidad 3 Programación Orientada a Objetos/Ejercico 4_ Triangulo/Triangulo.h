#pragma once

/*
Crea una clase llamada Triangulo que represente un triángulo.
La clase debe contener un vector de 3 elementos, donde cada elemento corresponde a la
longitud de un lado del triángulo. Implementa los siguientes métodos:
●	getLado(int numero): Devuelve la longitud del valor del lado correspondiente al número
 proporcionado (1, 2, o 3). Si el número es incorrecto (fuera del rango 1-3), devuelve cero.
●	setLado(int numero, float valor): Establece el valor del lado correspondiente al número proporcionado (1, 2, o 3). Si el número es incorrecto (fuera del rango 1-3), no realiza ninguna acción.
●	getTipo(): Devuelve el tipo de triángulo según sus lados:
○	1 para un triángulo equilátero (todos los lados iguales).
○	2 para un triángulo isósceles (dos lados iguales).
○	3 para un triángulo escaleno (todos los lados diferentes).
●	isEscaleno(): Devuelve true si el triángulo es escaleno, false en caso contrario.
●	isIsosceles(): Devuelve true si el triángulo es isósceles, false en caso contrario.
●	isEquilatero(): Devuelve true si el triángulo es equilátero, false en caso contrario.

*/


class Triangulo{
private:
	float _lados[3];

public:
	float getLado(int numero);
	void setLado(int numero, float valor);
	Triangulo();
	Triangulo(float lado1, float lado2, float lado3);
	int getTipo();
	bool esEscaleno();
	bool isIsosceles();
	bool isEquilatero();


};
