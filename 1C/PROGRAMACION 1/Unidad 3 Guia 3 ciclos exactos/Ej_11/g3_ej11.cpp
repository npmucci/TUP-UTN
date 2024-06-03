/*11 Hacer un programa para ingresar una lista de 10 n�meros, luego informar el
m�ximo y el m�nimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listar� M�ximo 42 M�nimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listar� M�ximo -5 M�nimo
-42.
Observe que los tres ejemplos dejan en claro que la suposici�n de que el
m�ximo �seguramente� es un positivo y el m�nimo �seguramente� es un
negativo, queda totalmente descartada.*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");


	int numero, maximo, minimo;

	for (int i=1;i<=10;i++){
		 cout << "Ingrese un n�mero ";
		 cin >> numero;

		 if(i==1){
			maximo = numero;
			minimo = numero;

		 }else if (numero > maximo){
			maximo = numero;

		 } else if (numero < minimo){
		 	minimo = numero;

		 }

	}

	cout << "--------------------------------" << endl;
	cout << " El n�mero m�ximo ingresado es " << maximo << endl;
	cout << " El n�mero m�mimo ingresado es " << minimo << endl;;


return 0;
}
