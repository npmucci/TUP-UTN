/*
2 Hacer una funci�n llamada CalcularMaximo que determine el m�ximo entre
dos n�meros. La funci�n debe recibir dos n�meros enteros por valor y devolver
el valor m�s grande. Si los n�meros son iguales debe devolver cualquiera de
los dos. La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos n�meros y, utilizando CalcularMaximo,
emita luego el n�mero mayor de ambos.
*/

#include <iostream>
using namespace std;

int CalcularMaximo (int n1,int n2){
	if (n1==n2){
		return n1;
	}else if (n1 >n2){
		return n1;
	}
	else{
		return n2;
	}

}


int main(){
	setlocale(LC_ALL, "Spanish");
	int n1, n2;

	cout << "Ingrese un n�mero " ;
	cin >> n1;
	cout << "Ingrese otro n�mero ";
	cin >> n2;

	if (n1!=n2){
		cout << "El n�mero mayor es: " << CalcularMaximo(n1,n2);
	}
	else{
		cout << "Ambos n�meros son inguales " << endl;
	}


return 0;
}
