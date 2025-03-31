#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Dado.h"
using namespace std;

int main()
{
   srand(time(0)); ///semilla para el random
 // vector de objetos de tipo Dado
    vector<Dado> vecDados(6);  // Inicializa un vector con 6 objetos Dado

 for(int i=0; i<6;i++){

    cout << endl <<"Dado #" << i+1 << ": ";
    cout << vecDados[i].getValor() << endl;
    if (vecDados[i].esMaximo()){
        cout << "El dado tiene el valor mas alto" << endl;
    }
    else if(vecDados[i].esMinimo()){
        cout << "El dado tiene el valor mas bajo" << endl;
    }
    else{
        cout << "El dado tiene un valor medio" << endl;
    }
     cout << "-------------------------------";

 }

    return 0;
}
