/*
9 Escribir una funci�n que reciba un n�mero y retorne 1 si el n�mero recibido es
perfecto y 0 si no es perfecto.
Hacer un programa para que, dada una lista de n�meros que finaliza con cero,
informe cu�ntos de ellos eran perfectos. Utilizar la funci�n solicitada.
*/

#include <iostream>
using namespace std;

int EsPerfecto (int numero);

int main(){
setlocale(LC_ALL, "Spanish");

	int numero, contadorPerfecto=0;
	cout << "Ingrese un n�mero ";
	cin >> numero;

	while(numero!=0){
		if (EsPerfecto(numero)==1){
			contadorPerfecto++;
		}
		cout << "Ingrese un n�mero ";
		cin >> numero;
	}
	cout << "Se ingresaron " << contadorPerfecto << " n�meros perfectos";

return 0;
}


int EsPerfecto(int numero){
	int sumaDivisores=0;

	for(int i=1; i<numero; i++){

		if(numero%i==0){
			sumaDivisores += i;
		}
	}
	if(sumaDivisores==numero){
		return 1;
	}
	else{
		return 0;
	}

}
