/*
13-Dada una lista de n�meros que finaliza cuando se ingresa un cero,
informar cual es el primer y �ltimo n�mero impar ingresado.
Ejemplo 8 4 -5 6 9 5 18 0 se informa -5 y 5.
*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
	int numero, contador=0, primerImpar, ultimoImpar;

	 cout << "Ingrese un n�mero ";
	 cin >> numero;


	 while (numero!=0){
			if(numero%2 !=0){/// averiguar si el numero es impar
				contador++;
				if(contador==1){ /// averiguamos el primer impar
				primerImpar = numero;

				} else{/// averiguamos el ultimo impar
				ultimoImpar = numero;

				}
			}

				cout << "Ingrese otro n�mero (para finalizar ingrese 0) " ;
				cin >> numero;
	 }

	cout << "---------------------------------"<< endl;
	if (contador >= 2) {
        cout << "El primer n�mero impar ingresado es: " << primerImpar<< endl;
		cout << "El �ltimo n�mero impar ingresado es: " << ultimoImpar<< endl;

    } else {
        cout << "No se ingresaron suficientes n�meros impares." << endl;
    }
return 0;
}
