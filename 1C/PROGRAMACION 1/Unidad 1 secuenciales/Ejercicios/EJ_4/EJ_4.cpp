/*4 Hacer un programa para ingresar por teclado la cantidad de asientos totales en
un avi�n y la cantidad de pasajes ocupados y luego calcular e informar el
porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos totales y se vendieron 80 pasajes, el
porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no
ocupaci�n ser� de un 60%.*/


#include <iostream>

using namespace std;

int main(){
float asientos, ocupados, desocupados,porcentajeOcupados, porcentajeDesocupados;
cout << "Ingrese la cantidad de asientos del avion: ";
cin >> asientos;
cout << "Ingrese la cantidad de pasajes vendidos : ";
cin >> ocupados;
desocupados = asientos - ocupados;
porcentajeOcupados = (ocupados/asientos)* 100;
porcentajeDesocupados = (desocupados/asientos)* 100;

cout << "El porcentaje de asientos ocupados es: " << porcentajeOcupados << "%"<< endl;
cout << "El porcentaje de asientos no ocupados es: " << porcentajeDesocupados << "%"<<endl;

return 0;
}
