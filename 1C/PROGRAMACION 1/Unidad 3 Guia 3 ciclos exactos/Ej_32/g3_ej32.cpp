/*32 Se ingresa una lista de 10 n�meros y se pide determinar si la lista est� formada
por todos n�meros alternados entre pares e impares o impares y pares.
Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel �Alternados�.
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel �Alternados�.
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel �No Alternados�.*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");

	int numero, numeroAnterior, contadorAlternado = 0;

    cout << "Ingrese el primer n�mero: ";
    cin >> numero;
    numeroAnterior = numero;
    contadorAlternado ++;

    for (int i = 1; i < 10; i++) {
        cout << "Ingrese un n�mero   : ";
        cin >> numero;

        if ((numeroAnterior % 2 == 0 && numero % 2 != 0) || (numeroAnterior % 2 != 0 && numero % 2 == 0)) {
            contadorAlternado++;
        } else {
            contadorAlternado = 0;
        }

        numeroAnterior = numero;
    }

    if (contadorAlternado == 10) {
        cout << "Los n�meros est�n alternados entre pares e impares." << endl;
    } else {
        cout << "Los n�meros NO est�n alternados." << endl;
    }

    return 0;
}
