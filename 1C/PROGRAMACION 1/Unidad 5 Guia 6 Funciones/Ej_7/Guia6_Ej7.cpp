/*

Escribir una funci�n CalcularMaximoAbsoluto que reciba dos n�meros y
retorne el m�ximo absoluto de ambos. Por ejemplo el m�ximo absoluto de los
n�meros -40 y 20 es 40.
Hacer un programa para ingresar dos n�meros y, utilizando
CalcularMaximoAbsoluto, emita luego el n�mero mayor absoluto de ambos.
*/

#include <iostream>
using namespace std;

int CalcularMaximoAbsoluto (int n1, int n2);
int main(){
    setlocale(LC_ALL, "Spanish");
    int n1, n2, maximoAbsoluto;

    cout << "Ingrese un n�mero ";
    cin >> n1;
    cout << "Ingrese otro n�mero, distinto del anterior ";
    cin >> n2;
    maximoAbsoluto=CalcularMaximoAbsoluto(n1,n2);
    cout << endl << "El m�ximo absoluto entre " << n1 << " y " << n2 << " es: " << maximoAbsoluto<< endl;

return 0;
}

CalcularMaximoAbsoluto(int n1, int n2){
    if(n1<0){
        n1*=-1;
    }
    if(n2<0){
        n2*=-1;
    }
    if(n1>n2){
        return n1;
    }
    else{
        return n2;
    }
}
