/*
5 Hacer una función llamada Redondear que reciba como parámetro un número
float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.
Hacer un programa para ingresar un número y, utilizando Redondear, emita
luego un cartel indicando el número redondeado.
*/

#include <iostream>
using namespace std;

// Función que redondea un número flotante a su entero más cercano
int Redondear(float numero);

int main() {
    setlocale(LC_ALL, "Spanish");

    float numero;
    cout << "Ingrese un número decimal: ";
    cin >> numero;

    cout << "El número redondeado es " << Redondear(numero) << endl;

    return 0;
}
Redondear(float numero){
{
    int entero = (int) numero;
    float resto = numero - entero;

    if(resto>=0.5){
		return numero +1;
    }
    else{
		return numero;
    }
}

}
