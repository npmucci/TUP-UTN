/* 19 Hacer un programa para ingresar un n�mero y luego informar la cantidad de
divisores de ese n�mero.
Ejemplo A. Si se ingresa 6 se listar�: 4 divisores.
Ejemplo B. Si se ingresa 9 se listar�: 3 divisores.
Ejemplo C. Si se ingresa 11 se listar�: 2 divisores..*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
	int numero, contador=0;
	 cout << "Ingrese un n�mero ";
	 cin >> numero;


	 for (int i=1; i<=numero;i++){
		if (numero%i==0){
			contador ++;
		}
	 }
	 cout << "El n�mero " << numero << " tiene " << contador << " divisores." << endl;

return 0;
}
