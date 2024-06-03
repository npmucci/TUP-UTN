/*
8 Hacer un programa para ingresar por teclado 5 grupos compuestos por
n�meros ordenados de menor a mayor. El final de cada grupo se detecta al
ingresar un n�mero menor a su anterior.
Se debe obtener y emitir:
a) Para cada uno de los grupos la cantidad de n�meros primos que lo
componen. Se informa 1 resultado por cada grupo.
b) El menor n�mero par de cada uno de los grupos. Se informa 1 resultado por
cada grupo.
c) El ante�ltimo y �ltimo n�mero positivo de cada uno de los grupos. Se
informan 2 resultados por cada grupo.
Ejemplo de c�mo se conforman los grupos:
-20, -5, 8, Grupo 1
2,20, 35, 42,  Grupo 2
12, 22, 23,  Grupo 3
7, 12, 18, 23, 80,  Grupo 4
12, 24, 36, -5 Grupo 5

*/


#include <iostream>
using namespace std;


int main(){
    setlocale(LC_ALL, "Spanish");
    int numero, numeroAnterior;
    //variables punto a
    int cantDivisores, contadorPrimos;
    //variables punto b
    int menorNro;
    bool esMenor;
    //variables punto c
    int ultimoPar,anteUltimoPar;


    for(int grupo=1; grupo<=5;grupo++){ // Bucle para los 10 grupos
        cout << endl << "----------------------" << endl;
        cout << "         GRUPO " << grupo << endl << endl;

         // Reniciar Variables para cada grupo
         cantDivisores=contadorPrimos=0;
         esMenor=true;
         ultimoPar=anteUltimoPar=0;

        cout << " Ingrese un n�mero ";
        cin >> numero;

        numeroAnterior=numero;

        while(numeroAnterior <=numero){
        //punto a
            for (int divisor=1; divisor<=numero;divisor++){
                if(numero%divisor==0){
                    cantDivisores++;
                    }
                }
            if(cantDivisores==2){
                contadorPrimos++;
            }
        //punto b
        if(!esMenor || numero < menorNro){
            menorNro=numero;
            esMenor=true;
        }

        //punto c
        if (numero >0 && numero%2==0){
            if(ultimoPar==0){
                ultimoPar=numero;
            }
            else{
                anteUltimoPar=ultimoPar;
                ultimoPar=numero;
            }

        }
        numeroAnterior=numero;
        cout << " Ingrese un n�mero ";
        cin >> numero;
        }
        cout << endl << "----------------------" << endl;
        cout << "         RESULTADOS " << grupo << endl << endl;
        //Mostrar punto a
        if(contadorPrimos>0){
            cout << "Cantidad de n�meros primos" << contadorPrimos<< endl;
        }
        else{
            cout << "No se ingresaron n�meros primos" << endl;
        }
        //Mostrar punto b

        cout << "Menor numero ingresado es " << menorNro<< endl;
        //Mostrar punto C

        if(ultimoPar==0){
            cout << "No se ingresaron numeros pares "<<endl;
        }
        else if(anteUltimoPar==0){
            cout << "Solo se ingres� un  numero par: "<<ultimoPar<<endl;
        }
        else{

        cout << "�ltimo Par " << ultimoPar<< endl;
        cout << "Ante �ltimo par " <<anteUltimoPar<<endl;

        }



    }


return 0;
}
