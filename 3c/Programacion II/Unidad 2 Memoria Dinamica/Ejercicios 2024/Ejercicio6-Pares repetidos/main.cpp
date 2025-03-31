#include <iostream>
#include <ctime>
using namespace std;

/*
6 Escribe un programa que solicite al usuario ingresar una lista de 10 números
enteros. Luego, el programa debe mostrar los números pares distintos que se
ingresaron. Para resolver este ejercicio, deberás implementar una función que
reciba un vector de enteros y su tamaño, y que devuelva un puntero a un vector
dinámico que contenga solo los números pares distintos del vector recibido.
*/
int* buscarParesDistintos(int vec[], int tam, int &tamPares);
void mostrarVector(int vec[], int tam);

int main()
{
    srand(time(0));  // Inicializa la semilla para la generación de números aleatorios
    int vecNros[10];  // Array para almacenar los 10 números enteros ingresados por el usuario
    int tamPares = 0;  // Variable para almacenar el tamaño del array de números pares distintos

    // Rellenar el array con números aleatorios entre 1 y 20
    for (int i = 0; i < 10; i++)
    {
        vecNros[i] = rand() % 20 + 1;
    }

    // Mostrar los números ingresados
    cout << "Números ingresados:" << endl;
    mostrarVector(vecNros, 10);

    // Llamada a la función que busca los números pares distintos
    int* vecPares = buscarParesDistintos(vecNros, 10, tamPares);

    // Mostrar los números pares distintos
    cout << "\nNúmeros pares distintos:" << endl;
    if (tamPares > 0)
    {
        mostrarVector(vecPares, tamPares);
    }
    else
    {
        cout << "No hay números pares distintos." << endl;
    }

    // Liberar la memoria dinámica asignada para el array de números pares
    delete[] vecPares;
    return 0;
}

// Función que busca y devuelve un puntero a un array dinámico con los números pares distintos
int* buscarParesDistintos(int vec[], int tam, int &tamPares)
{
    int* vecParesTemp = new int[tam];  // vector temporal para almacenar los pares no repetidos
    tamPares = 0;

    // Recorrer el vector original
    for (int i = 0; i < tam; i++)
    {
        bool repetido = false;  // para verificar si el número ya fue agregado al vector temporal
        if (vec[i] % 2 == 0)
        {
            // Comprobar si el número ya está en el vector temporal
            for (int j = 0; j < tamPares; j++)
            {
                if (vec[i] == vecParesTemp[j])
                {
                    repetido = true;  // Marca como repetido si ya existe
                    break;
                }
            }
            // Si el número no es repetido, lo agrega al vector temporal
            if (!repetido)
            {
                vecParesTemp[tamPares] = vec[i];
                tamPares++;  // Incrementa el tamaño del contenedor temporal
            }
        }
    }

    // Crear un nuevo vector con el tamaño exacto de los números pares distintos encontrados
    int* vecPares = new int[tamPares];
    for (int i = 0; i < tamPares; i++)
    {
        vecPares[i] = vecParesTemp[i];  // Copiar los números pares al nuevo array
    }

    // Liberar memoria dinámica asignada al array temporal
    delete[] vecParesTemp;

    // Retorna el puntero al array dinámico con los números pares distintos
    return vecPares;
}


void mostrarVector(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vec[i] << ", ";
    }
    cout << endl;
}
