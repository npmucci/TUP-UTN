/*17 Hacer un programa para ingresar un n�mero y luego informar todos los
divisores de ese n�mero.
Ejemplo A. Si se ingresa 6 se listar�n: 1, 2, 3 y 6
Ejemplo B. Si se ingresa 9 se listar�n: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listar�n 1 y 11.*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
	int numero;
	 cout << "Ingrese un n�mero ";
	 cin >> numero;

	 cout << "Los divisores de " << numero << " son: ";

	 for (int i=1; i<=numero;i++){
		if (numero%i==0){
			if(i==numero){
				cout << i << endl;
			}else{
				cout << i << ", ";
			}
		}

	 }
return 0;
}
