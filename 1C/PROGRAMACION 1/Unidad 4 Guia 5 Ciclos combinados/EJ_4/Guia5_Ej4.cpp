/*
4
Dada una lista de n�meros compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:

a) Para cada uno de los grupos el m�ximo de los n�meros pares y
el m�ximo de los n�meros impares. Se informan 2 resultados por cada grupo.
b) Para cada uno de los grupos el porcentaje de n�meros negativos
 y n�meros positivos. Se informan 2 resultados por cada grupo.
c) Cu�ntos n�meros positivos hab�a en total entre los 10 grupos.
Se informa 1 resultado al final.


*/


#include <iostream>
using namespace std;


int main(){
    setlocale(LC_ALL, "Spanish");

    int numero,totalPositivos=0;



    for (int i=1;i<=10;i++){
        int maximoPar, maximoImpar;
        bool par=false, impar=false;
        int cantPositivos=0, cantNegativos=0;
        float ptjePositivos, ptjeNegativos;
        cout << "Ingrese un n�mero ";
        cin >>numero;
        while(numero!=0){
        //punto a
            if(numero%2==0){
                if(!par||numero>maximoPar){
                    maximoPar=numero;
                    par=true;
                }
            }
            else if(!impar||numero>maximoImpar){
                    maximoImpar=numero;
                    impar=true;
                }
        //punto b
            if(numero>0){
                cantPositivos++;
                totalPositivos++;
            }
            else{
                cantNegativos++;
            }
            cout << "Ingrese un n�mero ";
            cin >>numero;
        }
        //punto b
        ptjePositivos= (float) cantPositivos*100/(cantPositivos+cantNegativos);
        ptjeNegativos= (float) cantNegativos*100/(cantPositivos+cantNegativos);
        //mostrar punto a, b
        cout << "--------------------------------------"<<endl;
        cout << "        GRUPO " << i << endl;
        cout << "M�ximo par   :  "<<maximoPar << endl;
        cout << "M�ximo impar :  "<<maximoImpar << endl;
        cout << "Porcentaje de numeros positivos:" << ptjePositivos <<" %" << endl;
        cout << "Porcentaje de numeros negativos:" << ptjeNegativos <<" %" << endl;

        cout << "--------------------------------------"<<endl;

        }

        cout << "El total de n�mero ingesados entre los 10 lotes es: "<<totalPositivos << endl;


return 0;
}
