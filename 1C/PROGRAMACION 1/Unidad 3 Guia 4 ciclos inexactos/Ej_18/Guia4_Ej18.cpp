/*
18 Se define a un n�mero como primo cuando tiene solamente dos divisores.
Ejemplo 1: 2, 7, 11, 13 son n�meros primos, ya que todos tienen solamente dos
divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Hacer un programa para ingresar un n�mero y luego informar con un cartel
aclaratorio si el mismo es un n�mero primo o es no es un n�mero primo. Debe
usar un ciclo inexacto para resolver este ejercicio.

*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
	int numero, divisor=1, contador=0;
	cout << "Ingresa un numero: ";
	cin >> numero;

	while( divisor <= numero){
		if(numero%divisor ==0){
			contador++;
		}

		divisor++;
	}

	if(contador ==2){
		cout << "El n�mero " << numero << " es primo" << endl;
	}
	else{
		cout << "El n�mero " << numero << " no es primo" << endl;

	}


return 0;
}
