/*16 Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
siguientes condiciones:
- �Promociona�, s� obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los
ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.
*/

#include <iostream>
using namespace std;


int main(){
	float nota1, nota2, nota3, nota4;

	cout << "Ingrese la nota 1" << endl;
	cin >> nota1;
	cout << "Ingrese la nota 2" << endl;
	cin >> nota2;
	cout << "Ingrese la nota 3" << endl;
	cin >> nota3;
	cout << "Ingrese la nota 4" << endl;
	cin >> nota4;

	 if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7) {
        cout << "Promociona" << std::endl;
    } else if ((nota1 >= 4 && nota2 >= 4 && nota3 >= 4) ||
               (nota1 >= 4 && nota2 >= 4 && nota4 >= 4) ||
               (nota1 >= 4 && nota3 >= 4 && nota4 >= 4) ||
               (nota2 >= 4 && nota3 >= 4 && nota4 >= 4)) {
        cout << "Rinde examen final" << endl;
    } else if (nota1 >= 4 || nota2 >= 4 || nota3 >= 4 || nota4 >= 4) {
        cout << "Recupera Parciales" << endl;
    } else {
        cout << "Recursa la materia" << endl;
    }


return 0;
}
