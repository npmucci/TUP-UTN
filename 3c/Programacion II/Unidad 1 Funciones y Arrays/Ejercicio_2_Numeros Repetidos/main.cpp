#include <iostream>
using namespace std;
/*Hacer una función llamada quitarRepetidos que reciba dos vectores de enteros de 10 elementos llamados
vectorSinProcesar y vectorSinRepetidos. La función debe procesar el vectorSinProcesar de manera que en el
vectorSinRepetidos queden todos los elementos distintos del vectorSinProcesar. La función debe devolver la
cantidad de elementos asignados a vectorSinRepetidos.
Ejemplo:
vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 }
vectorDos[10];
int elementos = quitarRepetidos(vectorUno, vectorDos);

En elementos debe quedar el valor 5 ya que son 5 los elementos sin repetirse del vector.
Además el vectorDos debe contener los valores 1, 2, 5, 4 y 3.

*/

int quitarRepetidos(int vectorSinProcesar[], int vectorSinRepetidos[]);
void mostrarVector(int vec[], int tam);

int main()
{
    int vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 };
    int vectorDos[10];
    int elementos = quitarRepetidos(vectorUno, vectorDos);

    cout << "Vector Sin Procesar" << endl;
    mostrarVector(vectorUno, 10);
    cout << "\n---------------------" << endl;
    cout << "Vector Sin Repetidos" << endl;
    mostrarVector(vectorDos, elementos); // Mostrar solo la cantidad de elementos sin repetidos
    cout << "\n---------------------" << endl;
    cout << "El vector sin repetidos tiene " << elementos << " elementos" << endl;

    return 0;
}

int quitarRepetidos(int vectorSinProcesar[], int vectorSinRepetidos[])
{
    int cantidadElementos = 0;
    for (int i = 0; i < 10; i++)
    {
        bool repetido = false;
        for (int j = 0; j < cantidadElementos; j++)
        {
            if (vectorSinProcesar[i] == vectorSinRepetidos[j]) /// si el elemento ya esta en el otro vector
            {
                repetido = true;

            }
        }
        if (!repetido)
        {
            vectorSinRepetidos[cantidadElementos] = vectorSinProcesar[i]; /// uso cantidad de elementos como indice para llenar el vector con elementos uno al lado del otro
            cantidadElementos++;
        }
    }
    return cantidadElementos;
}

void mostrarVector(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vec[i] << "|";
    }
}
