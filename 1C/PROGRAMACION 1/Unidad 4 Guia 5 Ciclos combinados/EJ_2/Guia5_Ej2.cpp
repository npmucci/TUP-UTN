/*
2
Hacer un programa para ingresar una lista de 10 números y
luego informar cuántos de los números ingresados son primos.
Se informa 1 resultado al final.

*/


#include <iostream>
using namespace std;


int main(){
    setlocale(LC_ALL, "Spanish");
    int numero;
    int cantPrimos=0;

    for(int i=1; i<=10;i++){

        cout << "Ingrese un numero ";
        cin >>numero;
        int divisor=1;
        int cantDivisores=0;
        while(divisor <=numero){
            if(numero%divisor==0){
                cantDivisores++;
            }
            divisor++;
        }
        if(cantDivisores==2){
            cantPrimos++;
        }
    }
    cout << "La cantidad de números primos ingresados es: " << cantPrimos << endl;

return 0;
}
