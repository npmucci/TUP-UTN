/*
5
Se dispone de una lista de 10 grupos de n�meros enteros separados entre
ellos por ceros. Se pide determinar e informar:
a) El n�mero de grupo con mayor porcentaje de n�meros impares positivos
respecto al total de n�meros que forman el grupo. Se informa 1 resultado al final.
b) Para cada grupo el �ltimo n�mero primo y en qu� orden apareci� en ese grupo,
si en un grupo no hubiera n�meros primos informar con un cartel aclaratorio.
 Se informan 2 resultados por cada grupo.
c) Informar cuantos grupos est�n formados por todos n�meros ordenados de mayor
a menor. Se informa 1 resultado al final.
*/



#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Spanish");

    // Variables para el punto a)
    float porcentajeMayorImpares;
    int grupoMayorImpares = 0;

    // Variables para el punto b)
    int ultimoPrimo, posicionUltimoPrimo;

    // Contador para el punto c)
    int gruposOrdenados = 0;

    // Bucle para los 10 grupos
    for (int grupo = 1; grupo <= 10; grupo++) {
        cout << endl << "----------------------" << endl;
        cout << "         GRUPO " << grupo << endl << endl;

        // Variables para el seguimiento del grupo
        int numero, cantidadImpares = 0, cantidadNumeros = 0;
        bool ordenado = true;
        ultimoPrimo = 0;

        // Entrada de n�meros para el grupo actual
        cout << "Ingresa un n�mero: ";
        cin >> numero;

        int numeroAnterior = numero;
        while (numero != 0) {
            cantidadNumeros++;

            // Punto a)
            if (numero > 0 && numero % 2 != 0) {
                cantidadImpares++;
            }

            // Punto b)
            int divisores = 0;
            for (int divisor = 1; divisor <= numero; divisor++) {
                if (numero % divisor == 0) {
                    divisores++;
                }
            }
            if (divisores == 2) {
                ultimoPrimo = numero;
                posicionUltimoPrimo = cantidadNumeros;
            }

            // Punto c)
            if (numero > numeroAnterior) {
                ordenado = false;
            }
            numeroAnterior = numero;

            cout << "Ingresa un n�mero: ";
            cin >> numero;
        }

        // Calcular porcentaje de impares para el punto a)
        float porcentajeImpares = (float)cantidadImpares * 100 / cantidadNumeros;
        if ((grupo==1) || (porcentajeImpares > porcentajeMayorImpares)) {
            porcentajeMayorImpares = porcentajeImpares;
            grupoMayorImpares = grupo;
        }

        // Mostrar resultado del punto b)
        if (ultimoPrimo == 0) {
            cout << "En el grupo " << grupo << " no se ingresaron n�meros primos." << endl;
        } else {
            cout << "El �ltimo primo ingresado es: " << ultimoPrimo << endl;
            cout << "Apareci� en la posici�n: " << posicionUltimoPrimo << endl;
        }

        // Contar grupos ordenados para el punto c)
        if (ordenado) {
            gruposOrdenados++;
        }
    }
    cout << endl << "----------------------" << endl;
    // Mostrar resultados finales
    cout << "El grupo con el mayor porcentaje de n�meros impares positivos es el grupo " << grupoMayorImpares << " con un " << porcentajeMayorImpares << "%." << endl;
    cout << "La cantidad de grupos con n�meros ordenados de mayor a menor es: " << gruposOrdenados << endl;

    return 0;
}

