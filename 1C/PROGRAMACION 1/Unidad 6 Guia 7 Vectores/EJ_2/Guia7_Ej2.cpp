/*
2 Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
mostrar por pantalla los valores que son mayores al promedio
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int tamanio);
int sumarVector(int v[], int tamanio);
void mostrarValorMayorA(int v[],int tamanio, float promedio);

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
void mostrarValorMayorA(int v[],int tamanio, float promedio){
   for(int i=0; i<tamanio; i++){
    if(v[i]>promedio){
    cout << v[i]  << " ";
   }
  }
}

int main(){
  const int TAM = 10;
  int vec[TAM], resultado;
  float promedio;

  cout << "Ingresar " << TAM << " números al vector: " << endl;
  cargarVector(vec, TAM);

  resultado = sumarVector(vec, TAM);
  promedio = (float)resultado/TAM;

  cout << "Los valores mayores al promedio " << promedio << " son: ";
  mostrarValorMayorA(vec,TAM,promedio);
  cout << endl;


  return 0;
}
