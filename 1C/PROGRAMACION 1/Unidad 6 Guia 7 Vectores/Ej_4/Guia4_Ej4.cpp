/*
4 Leer 10 n�meros y guardarlos en un vector. Determinar e informar cu�l es el
valor m�ximo absoluto del vector. Por ejemplo 20, -43 y 5, el m�ximo absoluto
es -43.

*/


#include <iostream>
using namespace std;

void cargarVector(int vec[], int tamanio);
int determinarMaximoAbsoltuto(int vec[], int tamanio);

void cargarVector(int vec[], int tamanio){
    for (int i=0; i<tamanio; i++){
        cin >> vec[i];
    }
}

int determinarMaximoAbsoltuto(int vec[], int tamanio){
    int maxAbsoluto, valorActual;
    maxAbsoluto = vec[0];
    for (int i = 1; i <tamanio; i++) {
        valorActual = vec[i];
        // Calcular el valor absoluto del elemento actual
        if (valorActual < 0) {
            valorActual = -valorActual;
        }

        // Comparar y actualizar el valor m�ximo absoluto
        if (valorActual> maxAbsoluto) {
            maxAbsoluto = valorActual;
        }

    }
    return maxAbsoluto;
}

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Spanish");
    const int TAM = 10;
    int vecNumeros[TAM];
    int maximoAbsoluto;

    cout << "Ingresar " << TAM << " n�meros al vector: " << endl;
    cargarVector(vecNumeros,TAM);

    maximoAbsoluto = determinarMaximoAbsoltuto(vecNumeros,TAM);
    // Informar el valor m�ximo absoluto
    cout << "El valor m�ximo absoluto del vector es: " << maximoAbsoluto << endl;

    return 0;
}
