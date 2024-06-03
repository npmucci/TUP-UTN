/*
12 Dada una lista de 10 n�meros, cargarlos en un vector. Luego ingresar un
n�mero e informar la cantidad de veces que ese n�mero aparece en el vector.
*/


#include <iostream>
using namespace std;

void cargarVector(int vec[], int tamanio);
int contarApariciones(int vec[], int tamanio, int numero);

void cargarVector(int vec[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        cin >> vec[i];
    }
}

int contarApariciones(int vec[], int tamanio, int numero) {
    int contador = 0;
    for (int i = 0; i < tamanio; i++) {
        if (vec[i] == numero) {
            contador++;
        }
    }
    return contador;
}

int main() {
    setlocale(LC_ALL, "Spanish");
    const int TAM = 10;
    int vecNumeros[TAM];
    int numero, apariciones;

    cout << "Ingrese " << TAM << " n�meros en el vector:" << endl;
    cargarVector(vecNumeros, TAM);

    cout << "Ingrese un n�mero para buscar en el vector: ";
    cin >> numero;

    apariciones = contarApariciones(vecNumeros, TAM, numero);

    cout << "El n�mero " << numero << " aparece " << apariciones << " veces en el vector." << endl;

    return 0;
}
