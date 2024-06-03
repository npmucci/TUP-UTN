/*
18 Dada una lista de 10 n�meros, cargarlos en un vector. Luego ingresar dos
n�meros a y b menores a 10. Determinar e informar cu�l es el valor m�ximo en
el vector considerando los elementos que est�n entre las posiciones a y b.
*/


#include <iostream>
using namespace std;

void cargarVector(int vec[], int tamanio);
int maxEntrePosiciones(int vec[], int a, int b);


void cargarVector(int vec[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        cin >> vec[i];
    }
}

int maxEntrePosiciones(int vec[], int a, int b) {
    int maximo = vec[a]; // Inicializamos el m�ximo con el primer valor en la posici�n a
    for (int i = a + 1; i <= b; i++) { // bucle for que tiene como inicio y fin los valores pedidos
        if (vec[i] > maximo) {
            maximo = vec[i]; // Actualizamos el m�ximo si encontramos un valor mayor
        }
    }
    return maximo;
}


int main() {
    setlocale(LC_ALL, "Spanish");
    const int TAM = 10;
    int vecNumeros[TAM];
    int a, b;

    cout << "Ingrese " << TAM << " n�meros en el vector:" << endl;
    cargarVector(vecNumeros, TAM);

    cout << "Ingrese dos �ndices a y b menores a 10 (a debe ser menor o igual a b):" << endl;
    cin >> a >> b;


        int maximo = maxEntrePosiciones(vecNumeros, a, b);
        cout << "El valor m�ximo entre las posiciones dadas es: " << maximo << endl;
    return 0;
}
