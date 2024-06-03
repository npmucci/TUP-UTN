/*
9-Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero,
luego informar el m�ximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listar� M�ximo 36.
Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listar� M�ximo 4.
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listar� M�ximo -8.

*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
	int numero, maximo;
	bool bandera;

	 cout << "Ingrese un n�mero " ;
	 cin >> numero;
	 bandera = false;


	 while (numero!=0){
		if(numero%2==0){
			if(!bandera || numero>maximo){
				maximo = numero;
				bandera = true;
			}
		}

		cout << "Ingrese otro n�mero (para finalizar ingrese 0) " ;
		cin >> numero;
	 }

	cout << "---------------------------------"<< endl;
	cout << "El maximo n�mero par ingresado es: " << maximo<< endl;

return 0;
}
