/*15 Hacer un programa para ingresar una lista de 8 n�meros y luego informar si
todos est�n ordenados en forma creciente. En caso de haber dos n�meros
�empatados� considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitir� un cartel: �Conjunto Ordenado�
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitir� un cartel: �Conjunto Ordenado�
Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitir� un cartel: �Conjunto No
Ordenado�
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.
*/

#include <iostream>
using namespace std;


int main(){
	int numero, menor, contador=0;

	for(int i=0;i<8;i++){
		cout << "Ingrese un n�mero ";
		cin >> numero;
		if(i==0){
			menor=numero;
			contador++;
		}else if(numero >= menor){
			contador++;
		}
	};
	if(contador == 8){
		cout << "Conjunto Ordenado" << endl;
	}else{
		cout << "Conjunto Desordenado" << endl;
	}

return 0;
}
