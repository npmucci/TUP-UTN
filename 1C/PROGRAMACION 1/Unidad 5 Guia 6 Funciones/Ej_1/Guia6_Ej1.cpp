/*
1 Hacer una funci�n llamada EsPar que determine si un n�mero es par o no. La
funci�n debe recibir un n�mero entero por valor y devolver true si es par o false
si no lo es. La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar un n�mero y, utilizando EsPar, emita luego un
cartel indicando si el n�mero ingresado es par o no es par.*/

#include <iostream>
using namespace std;

bool EsPar(int n);

int main(){
	setlocale(LC_ALL, "Spanish");
	 int numero;
	 cout << "Ingrese un n�mero ";
	 cin >> numero;

	 if (EsPar(numero)){
		cout << "El n�mero ingresado es par " << endl;

	 }
	 else{
		cout << "El n�mero ingresado es impar " << endl;
	 }


return 0;
}

bool EsPar(int n){

		if(n%2==0){
			return true;
		}
		else{
			return false;
		}
	}
