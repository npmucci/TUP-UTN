/*
11 Hacer una funci�n llamada contarDigitos que reciba por valor un n�mero
entero y determine y devuelva la cantidad de d�gitos del n�mero. Por ejemplo,
si se recibe el n�mero 840 debe devolver 3.
Hacer un programa que, a partir de un n�mero que ingresa el usuario, informe
por pantalla la cantidad de d�gitos del n�mero ingresado.
*/

#include <iostream>
using namespace std;

int ContarDigitos(int numero);
int main(){
    setlocale(LC_ALL, "Spanish");
    int numero, digitos;
    cout << "Ingrese un n�mero ";
    cin >> numero;
    digitos= ContarDigitos(numero);

    cout << endl << "El numero " << numero << " tiene " << digitos << " digitos" << endl;

return 0;
}
 ContarDigitos(int numero){
    int digitos=0;
     while(numero >0){
        numero = (numero/10);
        digitos++;
     }
    return digitos;
 }
