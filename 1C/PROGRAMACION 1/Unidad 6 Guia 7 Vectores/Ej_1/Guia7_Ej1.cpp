/*
1 Hacer un programa para ingresar 10 números y guardarlos en un vector.
Determinar e informar cuál es la suma de los valores del vector
*/


#include <iostream>
using namespace std;

void cargarVector(int v[], int tamanio);
int sumarVector(int v[], int tamanio);

void cargarVector(int v[], int tamanio){
  int i;
  for(i=0; i<tamanio; i++){
   cin >> v[i];
  }
}


int sumarVector(int lista[], int tamanio){
  int i, suma = 0;
  for(i=0; i<tamanio; i++){
   suma += lista[i];
  }
  return suma;
}

int main(){
    setlocale(LC_ALL, "Spanish");
  const int TAM = 10;
  int vec[TAM], resultado;

  cout << "Ingresar " << TAM << " números al vector: " << endl;
  cargarVector(vec, TAM);


  resultado = sumarVector(vec, TAM);

  cout << endl << endl << "La suma de los elementos del vector es: " << resultado;

  return 0;
}
