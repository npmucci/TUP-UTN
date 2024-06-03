/*
11
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero,
informar el m�ximo de los negativos y el m�nimo de los positivos.
Ejemplo: 5 8 12 2 -10 15 -20 8 -3 24 0.
M�ximo Negativo: -3.
M�nimo Positivo: 2.
*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
		int numero, maximoNegativo, minimoPositivo;
		bool negativo=false, positivo=false;

	 cout << "Ingrese un n�mero " ;
	 cin >> numero;


	 while (numero!=0){
		if(numero>0){
			if(!positivo || numero < minimoPositivo){
			minimoPositivo = numero;
			positivo = true;
			}
		}else if(numero <0){
			if(!negativo || numero > maximoNegativo){
			maximoNegativo = numero;
			negativo = true;
			}
		}

		cout << "Ingrese otro n�mero (para finalizar ingrese 0) " ;
		cin >> numero;
	 }

	cout << "---------------------------------"<< endl;

    if (positivo)
        cout << "El m�nimo n�mero positivo ingresado es: " << minimoPositivo << endl;
    else
        cout << "No se ingresaron n�meros positivos." << endl;

    if (negativo)
        cout << "El m�ximo n�mero negativo ingresado es: " << maximoNegativo << endl;
    else
        cout << "No se ingresaron n�meros negativos." << endl;



return 0;
}
