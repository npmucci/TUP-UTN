/*
Hacer un programa para ingresar una lista de números que finaliza cuando
se ingresa un cero y luego informar el porcentaje de números primos y el
porcentaje de números no primos. Se informan 2 resultados al final.
*/

#include <iostream>
using namespace std;


int main(){
    setlocale(LC_ALL, "Spanish");
    int numero;
    int cantPrimos=0, cantNoPrimos=0;
    float ptjePrimos,ptjeNoPrimos;

    cout<< "Ingrese un número ";
    cin >> numero;

    while (numero!=0){
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
        else{
            cantNoPrimos++;
        }
        cout<< "Ingrese un número ";
        cin >> numero;
    }
    ptjePrimos =(float)cantPrimos*100/(cantNoPrimos+cantPrimos);
    ptjeNoPrimos= (float)cantNoPrimos*100/(cantNoPrimos+cantPrimos);

    cout << "El porcentaje de números primos ingresados es: " << ptjePrimos << "%"<<endl;
    cout << "El porcentaje de números no primos ingresados es: " << ptjeNoPrimos << "%"<<endl;

return 0;
}
