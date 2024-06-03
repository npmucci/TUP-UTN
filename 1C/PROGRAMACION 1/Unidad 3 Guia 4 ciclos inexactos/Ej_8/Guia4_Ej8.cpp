/*
8-Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero,
luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates� considerar la primera aparici�n.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7.
Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listar� M�ximo -3 Posici�n 4.
*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
	int numero, maximo, posicion, contador;

	 cout << "Ingrese un n�mero " ;
	 cin >> numero;
	 maximo = numero;
	 contador = 1;
	 posicion = contador;

	 while (numero!=0){
		if(numero>maximo){
			maximo = numero;
			posicion= contador;

		}

		cout << "Ingrese otro n�mero (para finalizar ingrese 0) " ;
		cin >> numero;
		contador ++;
	 }

	cout << "---------------------------------"<< endl;
	cout << "El maximo n�mero ingresado es: " << maximo<< endl;
	cout << "Y se ingres� en la posici�n  : " << posicion<< endl;

return 0;
}
