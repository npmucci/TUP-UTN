/*
1
Hacer un programa para ingresar una lista de 10 números y
luego informar cuántos de los números ingresados son perfectos.
Se informa 1 resultado al final.

*/


#include <iostream>
using namespace std;


int main(){
    setlocale(LC_ALL, "Spanish");
    int numero;
    int cantPerfectos=0;

    for(int i=1; i<=10;i++){

        cout << "Ingrese un numero ";
        cin >>numero;
        int divisor=1;
        int sumaDivisores=0;
        while(divisor <numero){
            if(numero%divisor==0){
                sumaDivisores+=divisor;
            }
            divisor++;
        }
        if(sumaDivisores==numero){
            cantPerfectos++;
        }
    }
    cout << "La cantidad de números perfectos ingresados es: " << cantPerfectos << endl;
return 0;
}
