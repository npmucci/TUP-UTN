/*30 Dada una lista de 7 n�meros todos distintos entre s� determinar e informar con
un cartel aclaratorio si los n�meros primos ingresados en la misma est�n
ordenados de menor a mayor. Los n�meros primos pueden no ser consecutivos,
pero s� estar ordenados.
Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga �Ordenados� ya que
los n�meros primos est�n ordenados: 5, 7, 13, 19.
Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga �Desordenados� ya
que los n�meros primos no est�n ordenados: 3, 5, 11, 7.*/

#include <iostream>
using namespace std;


int main(){
	 int numero, primoMenor, contadorDivisores=0, contadorPrimo=0, contadorOrdenado=0;
	 bool primerPrimo=false;

	 for (int i=1; i<=7; i++){
		cout << "Ingrese un n�mero ";
		cin >> numero;
		contadorDivisores=0;
		for(int j=1;j<=numero;j++){
			if(numero%j==0){
				contadorDivisores++;
			}
		};

		if(contadorDivisores == 2){
			contadorPrimo ++;
			if(!primerPrimo){
				primoMenor = numero;
				primerPrimo = true;
				contadorOrdenado++;
			}else if(numero>primoMenor){
				primoMenor = numero;
				contadorOrdenado++;
			}else{
				contadorOrdenado = 0;
			}
		}

	 };

	 if(contadorPrimo == contadorOrdenado){
			cout << "Los n�meros primos ingresados est�n ordenado de menor a mayor. " << endl;
		}else{
			cout << "Los n�meros primos ingresados  NO est�n ordenado de menor a mayor. " << endl;

		}


return 0;
}
