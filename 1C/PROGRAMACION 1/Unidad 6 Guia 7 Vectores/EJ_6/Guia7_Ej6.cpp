/*
Leer 10 n�meros y guardarlos en un vector. Determinar e informar los dos
�ltimos n�meros pares en el vector y sus respectivas posiciones en el mismo.
Suponer que habr� al menos dos n�meros pares.
*/


#include <iostream>
using namespace std;
void cargarVector(int vec[], int tamanio);
void informarParesYPosicion(int vec[], int tamanio);


void cargarVector(int vec[], int tamanio){
    for (int i=0; i<tamanio; i++){
        cin >> vec[i];
    }
}
void informarParesYPosicion(int vec[], int tamanio){
    int ultimoPar=0, anteUltimoPar=0;
    int posUltimo, posAnteUltimo;

    for (int i=0; i<tamanio;i++){
        if(vec[i]%2==0){
            if(ultimoPar==0){
                ultimoPar=vec[i];
                posUltimo=i+1;
            }
            else{
                anteUltimoPar=ultimoPar;
                ultimoPar=vec[i];
                posAnteUltimo=posUltimo;
                posUltimo=i+1;
            }

        }

    }
    cout << "Ante �ltimo n�mero par " << anteUltimoPar << ", posici�n # " << posAnteUltimo<< endl,
    cout << "�ltimo n�mero par " << ultimoPar << ", posici�n # " << posUltimo<< endl;



}

int main(){
    setlocale(LC_ALL, "Spanish");
    const int TAM = 10;
    int vecNumeros[TAM];
    int menorImpar,mayorPar;

    cout << "Ingresar " << TAM << " n�meros al vector: " << endl;
    cargarVector(vecNumeros,TAM);
    informarParesYPosicion(vecNumeros,TAM);


return 0;
}
