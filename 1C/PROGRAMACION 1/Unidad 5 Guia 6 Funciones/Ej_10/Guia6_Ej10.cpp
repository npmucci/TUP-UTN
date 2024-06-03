/*
10 Hacer una funci�n que reciba un c�digo de naipe (del 1 al 40) y determine el
n�mero y el palo de la baraja espa�ola de 40 cartas. La funci�n debe recibir por
referencia el n�mero de naipe y el nombre del palo y por valor el c�digo de
naipe.
Tener en cuenta que:
Los c�digos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.*/

#include <iostream>
using namespace std;

void Baraja(int codigo, int &nroNaipe, string &palo);

int main(){
setlocale(LC_ALL, "Spanish");

	int codigo, nroNaipe;
	string palo;

	cout << "Ingrese el c�digo del naipe (entre 1 y 40) ";
	cin >> codigo;
	Baraja(codigo, nroNaipe, palo);
	cout <<endl <<"El ID #"<< codigo << " corresponde al " << nroNaipe << " de " << palo << endl;


return 0;
}

void Baraja(int codigo, int &nroNaipe, string &palo){

	if(codigo <=10){
		palo="espada";
	}
	else if(codigo>10 && codigo <=20){
		palo="basto";
	}
	else if(codigo>20 && codigo <=30){
		palo = "copa";
	}
	else{
		palo="oro";
	}

	int resto = codigo % 10;
    switch(resto)
    {
    case 1:
        nroNaipe=1;
        break;
    case 2:
        nroNaipe=2;
        break;
    case 3:
        nroNaipe=3;
        break;
    case 4:
        nroNaipe=4;
        break;
    case 5:
        nroNaipe=5;
        break;
    case 6:
        nroNaipe=6;
        break;
    case 7:
        nroNaipe=7;
        break;
    case 8:
        nroNaipe=10;
        break;
    case 9:
        nroNaipe=11;
        break;
    case 0:
        nroNaipe=12;
        break;
    }
}
