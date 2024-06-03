/*
14-Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero,
informar si todos est�n ordenados en forma creciente.
En caso de haber dos n�meros �empatados� considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10 1 5 7 15 18 20 23 0 se emitir� un cartel: �Conjunto Ordenado�
Ejemplo 2: 10 10 15 20 25 25 28 33 0 se emitir� un cartel: �Conjunto Ordenado�
Ejemplo 3: 10 1 15 7 -15 18 20 23 0 se emitir� un cartel: �Conjunto No Ordenado�

*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
	int numero, anterior;
	bool ordenado= true;

	 cout << "Ingrese un n�mero ";
	 cin >> numero;
	 anterior = numero;



	 while (numero != 0) {
        if (numero < anterior) { // Verificar si el n�mero actual es menor que el anterior
            ordenado = false; // Si no lo es, la lista no est� ordenada

        }
        anterior = numero; // Actualizar el n�mero anterior para la pr�xima iteraci�n
        cout << "Ingrese otro n�mero (para finalizar ingrese 0): ";
        cin >> numero;
    }




	cout << "---------------------------------"<< endl;
	if (ordenado) {
        cout << "Conjunto Ordenado" << endl;

    } else {
        cout << "Conjunto Desordenado" << endl;
    }

return 0;
}
