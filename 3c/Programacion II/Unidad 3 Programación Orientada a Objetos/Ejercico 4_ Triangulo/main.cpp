#include <iostream>
#include "Triangulo.h"
using namespace std;

int main()
{
    Triangulo t1(3.0,3.0,3.0); // Tri�ngulo equil�tero
    Triangulo t2; // Tri�ngulo is�sceles
    Triangulo t3; // Tri�ngulo escaleno


     t2.setLado(1,3.0);
    t2.setLado(2,4.0);
    t2.setLado(3,4.0);

     t3.setLado(1,3.0);
    t3.setLado(2,4.0);
    t3.setLado(3,5.0);


    cout << "Tipo de t1: " << t1.getTipo() << " (1: Equil�tero, 2: Is�sceles, 3: Escaleno)" << endl;
    cout << "Tipo de t2: " << t2.getTipo() << " (1: Equil�tero, 2: Is�sceles, 3: Escaleno)" << endl;
    cout << "Tipo de t3: " << t3.getTipo() << " (1: Equil�tero, 2: Is�sceles, 3: Escaleno)" << endl;
    return 0;
}
