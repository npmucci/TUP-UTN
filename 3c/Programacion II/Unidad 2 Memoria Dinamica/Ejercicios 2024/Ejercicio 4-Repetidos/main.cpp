#include <iostream>

using namespace std;


/*
4
Hacer una función que reciba un vector de enteros y su tamaño y devuelva la cantidad de
números distintos que se repiten en el vector.

*/

int contarNumerosDistintosRepetidos(int vec[], int tam);
int main() {
    int vec[] = {1, 2, 3, 2, 4, 1, 5, 6, 7, 5};
    int tam = 10;

    int cantidadDistintosRepetidos = contarNumerosDistintosRepetidos(vec, tam);

    cout << "Cantidad de números distintos que se repiten: " << cantidadDistintosRepetidos << endl;

    return 0;
}


int contarNumerosDistintosRepetidos(int vec[], int tam) {
    int contador = 0;

    for (int i = 0; i < tam; i++) {
        // Verificar si el número ya se marcó como repetido
        if (vec[i] == 0) {
            continue;
        }

        int numero = vec[i];// voy tomando cada posicion del vector para compararlas con el resto
        bool repetido = false;

        // Verificar si el número se repite en el resto del vector
        for (int j = i + 1; j < tam; j++) {
            if (vec[j] == numero) {
                repetido = true;
                vec[j] = 0; // Marcar el número repetido para no contarlo de nuevo
            }
        }

        // Si el número se repitió, también marcarlo como repetido en la posición actual
        if (repetido) {
            contador++;
            vec[i] = 0; // Marcar el número repetido para no contarlo de nuevo
        }
    }

    return contador;
}
