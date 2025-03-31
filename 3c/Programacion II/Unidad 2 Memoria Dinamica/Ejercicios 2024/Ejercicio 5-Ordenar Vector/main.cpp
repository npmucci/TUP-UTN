#include <iostream>
#include <ctime>
using namespace std;

/*
5 Hacer una función que reciba un vector de enteros y su tamaño y luego muestre
el vector ordenado de forma ascendente, tener en cuenta que el vector enviado
como argumento no debe ser modificado.
*/
void ordenarVectorAscendente(int vec[], int tam);
void mostrarVector(int vec[], int tam);

int main()
{
    int tam=20;
    int vecEnteros [20];
    srand(time(0));
    for(int i=0; i<20; i++)
    {
        vecEnteros[i]= rand()%1500+1;
    }
    cout << "VECTOR ORIGINAL" << endl;
    mostrarVector(vecEnteros,tam);
    cout << endl;
    cout <<"-----------------------------------------------------------------------------------------------------" << endl;
    cout << "VECTOR ORDENADO" << endl;
    ordenarVectorAscendente(vecEnteros,tam);
    cout << endl;
    cout <<"------------------------------------------------------------------------------------------------------" << endl;
    cout << "VECTOR ORIGINAL" << endl;
    mostrarVector(vecEnteros,tam);
    cout<< endl;

    return 0;
}
void ordenarVectorAscendente(int vec[], int tam)
{
    int *vecOrdenado;

    vecOrdenado = new int[tam];
    if(vecOrdenado==nullptr)
    {
        cout<< "No se pudo asignar la memoria";
        return;
    }

    for (int i=0; i<tam; i++) ///copio un vector en otro
    {
        vecOrdenado[i]=vec[i];
    }

    for (int i=0; i<tam; i++)
    {
        int num = vecOrdenado[i];
        int aux;
        for (int j=i+1; j<tam; j++)
        {
            if(vecOrdenado[j]<vecOrdenado[i])
            {
                aux=vecOrdenado[i];
                vecOrdenado[i]=vecOrdenado[j];
                vecOrdenado[j]=aux;
            }
        }

    }
    mostrarVector(vecOrdenado,tam);
     delete[] vecOrdenado; // Liberar la memoria asignada
}

void mostrarVector(int vec[], int tam)
{
    for (int i=0; i<tam; i++)
    {

        cout << vec[i] << ", ";
    }




}
