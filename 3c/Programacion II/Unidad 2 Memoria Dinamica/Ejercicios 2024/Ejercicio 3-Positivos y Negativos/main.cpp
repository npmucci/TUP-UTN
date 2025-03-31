#include <iostream>

using namespace std;

/*

3
Hacer un programa que solicite al usuario 10 números y luego muestre primero los números positivos y luego los negativos.
El programa debe crear dos arrays dinámicos con la cantidad exacta en cada caso:
uno para almacenar los números positivos y otro para los números negativos.
*/


void llenarYContarPositvosNegativos(int vec[], int tam,int &pares, int &impares);
void llenarVector(int vecNumeros[], int *vecPositivos,int *vecNegativos, int tam);
void mostrarVector (int *vec, int tam);

int main()
{
    int vecNumeros[10] = {};
    int cantidadPositivos,cantidadNegativos, *positivos, *negativos;
    cantidadPositivos=0;
    cantidadNegativos=0;
    llenarYContarPositvosNegativos(vecNumeros,10,cantidadPositivos,cantidadNegativos);

    positivos= new int [cantidadPositivos];
    negativos= new int[cantidadNegativos];

    if(positivos==NULL || negativos==NULL)
    {
        cout<<"ERROR DE ASIGNACION DE MEMORIA";
        return -1;
    }
    llenarVector(vecNumeros,positivos,negativos,10);
   cout << "Números positivos:" << endl;
    mostrarVector(positivos, cantidadPositivos);
    cout << "Números negativos:" << endl;
    mostrarVector(negativos, cantidadNegativos);

    delete []positivos;
    delete []negativos;

    return 0;
}

void llenarYContarPositvosNegativos(int vec[], int tam,int &positivos, int &negativos)
{
    for(int i=0; i<tam; i++)
    {
        cout << "Ingrese un número: ";
        cin >> vec[i];
                if(vec[i]>0)
        {
            positivos++;
        }
        else if(vec[i]<0)
        {

            negativos++;
        }
    }
}

void llenarVector(int vecNumeros[], int *vecPositivos, int *vecNegativos, int tam)
{
    int j=0;
    int k=0;
    for(int i=0;i<tam;i++)
    {
        if(vecNumeros[i]>0)
        {
            vecPositivos[j]=vecNumeros[i];
            j++;
        }
        else if(vecNumeros[i]<0)
        {
            vecNegativos[k]=vecNumeros[i];
            k++;

        }
    }

}


void mostrarVector (int *vec, int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout<< *(vec+i)<< endl;
    }

}
