#pragma once
/*
Crea una clase llamada Rectangulo que represente un rect�ngulo.
La clase debe tener dos atributos correspondientes a la base y altura.
Implementa las siguientes metodos:
Getters y Setter de cada atributo.
calcularArea(): Devuelve el �rea del rect�ngulo.
calcularPerimetro(): Devuelve el per�metro del rect�ngulo.
*/
class Rectangulo{
private:
	int _base;
	int _altura;

public:
	Rectangulo (int b, int a); ///constructor
	///getters
	int getBase();
	int getAltura();

	///setters
	void setBase (int b);
	void setAltura (int a);

	///metodos
	int calcularArea ();
	int calcularPerimetro( );

};
