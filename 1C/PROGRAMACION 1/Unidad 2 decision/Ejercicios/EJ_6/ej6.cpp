/*6 Hacer un programa para ingresar por teclado tres n�meros y luego determinar e
informar con una leyenda aclaratoria si los tres son iguales entre s�, caso
contrario no emitir nada.
Tener en cuenta: Si A es igual a B y B es igual a C, entonces A y C son iguales.*/

#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout <<"Ingese el primer numero" << endl;
    cin >> num1;
    cout <<"Ingese el segundo numero" << endl;
    cin >> num2;
    cout <<"Ingese el tercer numero" << endl;
    cin >> num3;

    if(num1==num2){
        if(num2==num3){
            cout << " Los tres numeros ingresados son iguales" << endl;
        }
    };


return 0;
}
