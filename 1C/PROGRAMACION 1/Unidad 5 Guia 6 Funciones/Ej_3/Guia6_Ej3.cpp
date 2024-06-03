/*
3 Hacer una funci�n llamada EsPrimo que determine si un n�mero es primo o
no. La funci�n debe recibir el n�mero y devolver true si es primo o false si no lo
es. La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar un n�mero y, utilizando EsPrimo, emita luego
un cartel indicando si el n�mero ingresado es primo o no es primo.
*/

#include <iostream>
using namespace std;
 bool EsPrimo(int numero){
	int contador=0;

	for (int i=1; i<=numero;i++){
		if(numero%i==0){
			contador++;
		}
	}
	if(contador==2){
		return true;
	}
	else{
		return false;
	}
 }

int main(){
	setlocale(LC_ALL, "Spanish");

	int numero;
	cout << "Ingrese un n�mero ";
	cin >> numero;

	if(EsPrimo(numero)){
		cout << "El n�mero ingresado es primo "<< endl;
	}
	else{
		cout << "El n�mero ingresado no es primo "<< endl;
	}

return 0;
}
