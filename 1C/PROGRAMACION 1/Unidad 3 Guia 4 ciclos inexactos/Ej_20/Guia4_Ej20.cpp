/*
20 Dada una lista de n�meros que finaliza cuando se ingresa un cero, informar el
primer n�mero par ingresado y su ubicaci�n en la lista y el �ltimo de los
n�meros primos y su ubicaci�n en la lista.
Ejemplo A: 7 4 5 6 9 13 10 0 se informa Primer n�mero par: 4 ubicaci�n 2.
�ltimo primo: 13 ubicaci�n 6.
Ejemplo B: 9 5 21 9 13 15 6 se informa Primer n�mero par: 6 ubicaci�n 7.
�ltimo primo: 13 ubicaci�n 5.

*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");

	int numero, primerPar, ultimoPrimo, posicion=0, posicionPar=0, posicionPrimo=0;

	cout << "Ingrese un n�mero ";
	cin >> numero;


	while(numero !=0){
		posicion++;
		if (numero%2==0  && posicionPar==0){ /// averiguar el primer par
			primerPar = numero;
			posicionPar = posicion;
		}

		int divisor=1, contador=0; /// averiguar el ultimo primo
		while( divisor <= numero){
		if(numero%divisor ==0){
			contador++;
		}

		divisor++;
		}

		if(contador ==2){
			ultimoPrimo=numero;
			posicionPrimo=posicion;
		}
		cout << "Ingrese un n�mero ";
		cin >> numero;
	}

	if(posicionPar!=0){
		cout << "El primer n�mero par ingresado es " << primerPar << endl;
		cout << " Su posicion es # " << posicionPar << endl;
	}
	else{
		cout << "No se ingresaron n�meros pares" << endl;
	}

	if (posicionPrimo!=0){
		cout << "El �timo n�mero primo ingresado es " << ultimoPrimo << endl;
		cout << " Su posicion es # " << posicionPrimo << endl;

	}
	else{
		cout << "No se ingresaron n�meros primos" << endl;

	}



return 0;
}
