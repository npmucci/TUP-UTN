/*
6
Dada una lista de n�meros todos distintos entre s� y que finaliza con un cero,
determinar e informar con un cartel aclaratorio si los n�meros primos de la
lista est�n ordenados de menor a mayor. Los n�meros primos pueden no ser consecutivos, pero s� deben estar ordenados.
Por ejemplo:
Ejemplo A: 4, 5, 7, 12, 13, 0. Se emite un cartel que diga �Ordenados� (5, 7 y 13)
Ejemplo B: 2, 10, 3, 5, 11, 7, 14, 0.
Se emite un cartel que diga �Desordenados� (2, 3, 5, 11 y 7).

*/


#include <iostream>
using namespace std;


int main(){
    setlocale(LC_ALL, "Spanish");

    int numero;
    cout << "Ingrese un n�mero ";
    cin >>numero;
    int primoAnterior=0;
    bool ordenado=true;
    while(numero!=0){
        int divisores=0;
        for(int i=1;i<=numero;i++){
            if(numero%i==0){
                divisores++;
            }
        }
        if(divisores==2){
            if(numero>primoAnterior){
                primoAnterior=numero;
            }
            else{
                ordenado=false;
            }
        }
    cout << "Ingrese un n�mero ";
    cin >>numero;
    }
 if(ordenado){

    cout << "Ordenados"<< endl;
 }
 else{
    cout << "Desordenados" <<endl;
 }

return 0;
}
