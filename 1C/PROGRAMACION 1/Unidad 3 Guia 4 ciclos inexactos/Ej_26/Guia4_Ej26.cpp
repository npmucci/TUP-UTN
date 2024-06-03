/*
26 Un n�mero Simon�rico es un n�mero positivo divisible por 15 y a la vez divisible
por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000
n�meros Simon�ricos. El usuario no debe ingresar nada.*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");

    int numero = 0; //

    cout << "Los primeros 1000 n�meros Simon�ricos son:" << endl;

    while (numero < 1000) {
        // Verificar si el n�mero cumple las condiciones para ser simon�rico
        if (numero % 15 == 0 && numero % 3 == 0 && numero % 6 != 0) {
            cout << numero << endl; // Mostrar el n�mero simon�rico encontrado
        }

        numero++; // Pasar al siguiente n�mero
    }

return 0;
}
