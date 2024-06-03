/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando
se ingresa un cero y luego informar el porcentaje de n�meros primos y el
porcentaje de n�meros no primos. Se informan 2 resultados al final.
*/

#include <iostream>
using namespace std;


int main(){
    setlocale(LC_ALL, "Spanish");
    int numero;
    int cantPrimos=0, cantNoPrimos=0;
    float ptjePrimos,ptjeNoPrimos;

    cout<< "Ingrese un n�mero ";
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
        cout<< "Ingrese un n�mero ";
        cin >> numero;
    }
    ptjePrimos =(float)cantPrimos*100/(cantNoPrimos+cantPrimos);
    ptjeNoPrimos= (float)cantNoPrimos*100/(cantNoPrimos+cantPrimos);

    cout << "El porcentaje de n�meros primos ingresados es: " << ptjePrimos << "%"<<endl;
    cout << "El porcentaje de n�meros no primos ingresados es: " << ptjeNoPrimos << "%"<<endl;

return 0;
}
