/*
5 Hacer una funci�n llamada Redondear que reciba como par�metro un n�mero
float y devuelva un n�mero entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.
Hacer un programa para ingresar un n�mero y, utilizando Redondear, emita
luego un cartel indicando el n�mero redondeado.
*/

#include <iostream>
using namespace std;

// Funci�n que redondea un n�mero flotante a su entero m�s cercano
int Redondear(float numero);

int main() {
    setlocale(LC_ALL, "Spanish");

    float numero;
    cout << "Ingrese un n�mero decimal: ";
    cin >> numero;

    cout << "El n�mero redondeado es " << Redondear(numero) << endl;

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
