/*14 Hacer un programa para ingresar por teclado la fecha de nacimiento de una
persona, ingresando d�a, mes y a�o como 3 datos individuales. Luego ingresar
la fecha actual ingresando d�a, mes y a�o como 3 datos individuales. Calcular
luego la edad en a�os de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que los 19 reci�n los cumple en
diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 d�as para cumplir
los 19 a�os.*/

#include <iostream>
using namespace std;


int main(){
	int diaA,mesA,anioA,diaN,mesN,anioN, edad;
		cout << "Ingrese el dia de nacimiento " << endl;
		cin >> diaN;
		cout << "Ingrese el mes de nacimiento " << endl;
		cin >> mesN;
		cout << "Ingrese el anio de nacimiento " << endl;
		cin >> anioN;
		cout << "Ingrese el dia actual " << endl;
		cin >> diaA;
		cout << "Ingrese el mes actual " << endl;
		cin >> mesA;
		cout << "Ingrese el anio actual " << endl;
		cin >> anioA;

		if (mesA > mesN){
			edad = anioA - anioN;
		}else if (mesA == mesN){
			if(diaA >diaN){
			edad = anioA - anioN;
			}else{
			edad = anioA - anioN -1;
			}
		}else{
			edad = anioA - anioN -1;
		}
		cout << "Usted tiene " << edad << " anios." << endl;

return 0;
}
