#include <iostream>
#include <ctime>
using namespace std;
/*
1
Escribe un programa que solicite al usuario el tamaño de un array de enteros,
lo cree dinámicamente utilizando new, el usuario debe poder cargar el array y mostrarlo,
y luego libere la memoria con delete

*/


void cargarVector(int *vec, int tam);
void mostrarVector( int *vec, int tam);
int main()
{
   int tam, *vecEnteros;
   srand(time(0)); /// Inicializo semilla para valores random.

   cout<< "¿Cuantos números desea ingresar? :";
   cin>> tam;
   vecEnteros = new int [tam]; // se pide la memoria
   if(vecEnteros==NULL){///se analiza si se pudo asignar la memoria
        cout<<"ERROR DE ASIGNACION DE MEMORIA";
        return -1;
    }

   cargarVector(vecEnteros,tam);
   mostrarVector(vecEnteros,tam);

   delete []vecEnteros; // se libera la memoria pedida
    return 0;
}

void cargarVector(int *vec, int tam){

    for(int i=0; i<tam;i++){
        vec[i]= rand() % 1000 + 1;
    ///*(vec + i) = rand() % 1000 + 1; // Asigna un número aleatorio entre 1 y 100
    }
}

void mostrarVector( int *vec, int tam){

 for(int i=0; i<tam;i++){
       cout << vec[i]<< endl;
    }
}
