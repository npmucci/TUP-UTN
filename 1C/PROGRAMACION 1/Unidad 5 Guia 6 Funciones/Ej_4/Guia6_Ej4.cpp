/*
4 Hacer una función llamada EsPrimoSophieGermain que reciba un número
entero y determine si el mismo es un número primo de Sophie Germain. Debe
devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número
primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.
Hacer un programa para ingresar un número un número y, utilizando
EsPrimoSophieGermain, emita luego un cartel indicando si el número
ingresado es primo Sophie Germain o no lo es.*/

#include <iostream>
using namespace std;

bool EsPrimo(int numero){
	int contador=0;

	for (int i=1; i<=numero;i++){
		if(numero%i==0){
			contador++;
		}
	}
	if(contador==2){
		return true;
	}
	else{
		return false;
	}
 }
// Función para verificar si un número es un primo de Sophie Germain
bool EsPrimoSophieGermain(int numero) {
    if (!EsPrimo(numero)) {
		return false;
    }
    int numero2 = 2 * numero + 1;
    return EsPrimo(numero2);
}

int main() {
    setlocale(LC_ALL, "Spanish");
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (EsPrimoSophieGermain(numero)) {
        cout << "El número ingresado es primo de Sophie Germain" << endl;
    } else {
        cout << "El número ingresado no es primo de Sophie Germain" << endl;
    }

    return 0;
}
