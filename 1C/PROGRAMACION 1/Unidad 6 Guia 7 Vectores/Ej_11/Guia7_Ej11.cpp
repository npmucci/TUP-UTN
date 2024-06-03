/*
11 Dada una lista de 10 n�meros, cargarlos en un vector. Luego ingresar un
n�mero e informar el primer �ndice donde ese n�mero aparece en el vector. En
caso de no aparecer se mostrar� el valor �ndice igual a -1.

*/


#include <iostream>
using namespace std;

void cargarVector(int vec[], int tamanio);
int buscarNumero(int vec[], int tamanio, int numero);

void cargarVector(int vec[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        cin >> vec[i];
    }
}

int buscarNumero(int vec[], int tamanio, int numero) {
    for (int i = 0; i < tamanio; i++) {
        if (numero == vec[i]) {
            return i;  // Retornar la posici�n encontrada
        }
    }
    return -1;  // Si no se encuentra el n�mero, retornar -1
}

int main() {
    setlocale(LC_ALL, "Spanish");
    const int TAM = 10;
    int vecNumeros[TAM];
    int numero, posicion;

    cout << "Ingrese " << TAM << " n�meros en el vector: " << endl;
    cargarVector(vecNumeros, TAM);

    cout << "Ingrese un n�mero para buscar en el vector: " << endl;
    cin >> numero;
    posicion = buscarNumero(vecNumeros, TAM, numero);

    if (posicion != -1) {
        cout << "El n�mero " << numero << " se encuentra en el �ndice " << posicion << endl;
    } else {
        cout << "El n�mero " << numero << " no se encuentra en el vector." << endl;
    }

    return 0;
}
