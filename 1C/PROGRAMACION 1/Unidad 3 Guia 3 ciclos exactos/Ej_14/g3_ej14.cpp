/*14 Dada una lista de 7 n�meros informar cual es el primer, el segundo, el
ante�ltimo y el �ltimo n�mero impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7,
Ante�ltimo impar: 9 y �ltimo impar: 5.*/

#include <iostream>
using namespace std;

int main() {
    int contador = 0, numero, primerImpar = 0, segundoImpar = 0, anteultimoImpar = 0, ultimoImpar = 0;

    for(int i = 0; i < 7; i++) {
        cout << "Ingrese un n�mero: ";
        cin >> numero;

        if(numero % 2 != 0) {
            contador++;
            if (contador == 1) {
                primerImpar = numero;
            } else if (contador == 2) {
                segundoImpar = numero;
            } else if (contador > 2) {
                anteultimoImpar = ultimoImpar;
                ultimoImpar = numero;
            }
        }
    }

    if (contador >= 4) {
        cout << "Primer impar: " << primerImpar << endl;
        cout << "Segundo impar: " << segundoImpar << endl;
        cout << "Ante�ltimo impar: " << anteultimoImpar << endl;
        cout << "�ltimo impar: " << ultimoImpar << endl;
    } else {
        cout << "No se han ingresado suficientes n�meros impares." << endl;

    }

    return 0;
}


