/*3 Hacer un programa para mostrar por pantalla los n�meros del 20 al 1 en orden
decreciente.
Importante: El programa no tiene ning�n ingreso de datos.*/

#include <iostream>
using namespace std;


int main(){

	setlocale(LC_ALL, "Spanish");

	for(int i=20; i>=1; i--){
		 cout << i << endl;

	}

return 0;
}
