/*31 Hacer un programa para ingresar 10 n�meros, luego informar los 2 mayores
valores ingresados, aclarando cual es el m�ximo y cu�l es el segundo m�ximo
descartando los n�meros repetidos.
Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado ser� 78 y 55.
Ejemplo B: -20, - 25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado ser� -3 y -8.
Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado ser� 20 y 14.
En el ejemplo C el valor 20 aparece dos veces, pero s�lo se considera una vez.*/

#include <iostream>
using namespace std;


int main(){
	bool bandera2=false;
	int numero, primerMaximo, segundoMaximo;

	for(int i=0; i<10;i++){

		cout << "Ingrese un numero ";
		cin >> numero;
		if (i==0){
			primerMaximo = numero;
		}else if (numero >= primerMaximo){
			segundoMaximo = primerMaximo;
			primerMaximo = numero;
		}else if (!bandera2){
			segundoMaximo = numero;
			bandera2 = true;
		}else if(numero >= segundoMaximo){
			segundoMaximo = numero;

		}
	}

	cout << endl << " El mayor numero ingresado es: " << primerMaximo << endl;
	cout << " El segundo mayor numero ingresado es: " << segundoMaximo << endl;

return 0;
}
