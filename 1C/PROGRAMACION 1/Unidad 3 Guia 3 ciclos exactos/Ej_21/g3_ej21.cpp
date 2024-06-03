/*21 Se define como divisores propios de un n�mero a aquellos que son sus
divisores excluyendo al n�mero en s� mismo.
Ejemplo A. Los divisores propios del 4 son: 1 y 2.
Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6.
Se define a un n�mero como perfecto cuando la suma de todos sus divisores
propios coincide con el n�mero en s� mismo.
Ejemplo A: 6 es n�mero perfecto pues 1+2+3=6
Ejemplo B: 28 es n�mero perfecto pues 1+2+4+7+14=28
Ejemplo C: 12 no es n�mero perfecto pues 1+2+3+4+6=16
Hacer un programa para ingresar un n�mero y luego informar con un cartel
aclaratorio si el mismo es un n�mero perfecto o no es n�mero perfecto*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");

	int numero, suma;
	cout << " Ingrese un n�mero " ;
	cin >> numero;

	for( int i = 1; i<numero; i++){
		 if (numero % i == 0){
			suma+=i;
		 }
	};
	if (suma == numero){
		cout << "El n�mero " << numero << " es perfecto." << endl;
	}else{
		cout << "El n�mero " << numero << " no es perfecto." << endl;
	}


return 0;
}
