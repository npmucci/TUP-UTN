/*
23
Dada una lista de n�meros que finaliza cuando se ingresa un n�mero divisible por 7,
informar cual es el ante�ltimo y �ltimo n�mero impar ingresado.
Ejemplo 8 4 -5 6 10 5 18 14 se informa -5 y 5.

Nota: Contemplar la posibilidad que podr�a no haber n�meros impares en la lista.

*/

#include <iostream>
using namespace std;


int main(){
    setlocale(LC_ALL, "Spanish");
    int numero,anteultimoImPar=0, ultimoImpar=0;

    cout<< "Ingrese un n�mero ";
    cin >>numero;

    while(numero%7!=0){
        if(numero%2!=0){
            if(ultimoImpar ==0){
                ultimoImpar=numero;
            }
            else{
                anteultimoImPar = ultimoImpar;
                ultimoImpar = numero;
            }

        }
        cout<< "Ingrese un n�mero ";
        cin >>numero;
    }

    if (ultimoImpar==0){
        cout << "No se ingresaron n�mero impares" << endl;
    }
    else if (anteultimoImPar==0){
        cout << "Solo se ingreso un n�mero par " << endl;
    }
    else{
        cout << "El �ltimo n�mero impar ingresado es: " << ultimoImpar << endl;
        cout << "El ante�ltimo n�mero impar ingresado es: " << anteultimoImPar << endl;

    }

return 0;
}
