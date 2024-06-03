/*12 Hacer un programa para ingresar una lista de 10 n�meros e informar el m�ximo
de los negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M�ximo Negativo -3. M�nimo Positivo 2.*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");


	int numero, maximoNeg, minimoPos;
	bool banderaPos=false, banderaNeg=false;

	for (int i=1;i<=10;i++){
		 cout << "Ingrese un n�mero ";
		 cin >> numero;

		 if(numero>0){
			if(!banderaPos){
				minimoPos = numero;
				banderaPos = true;

			}else if (numero < minimoPos){
				minimoPos = numero;
			}

		 } else if (numero < 0){
			if(!banderaNeg){
				maximoNeg = numero;
				banderaNeg = true;

			}else if (numero > maximoNeg){
				maximoNeg = numero;
			}


		 }

	}

	cout << "--------------------------------" << endl;
	cout << " El n�mero m�ximo negativo ingresado es " << maximoNeg << endl;
	cout << " El n�mero m�mimo positivo  ingresado es " << minimoPos << endl;;


return 0;
}
