/*16 El Laboratorio V&V hace frascos de p�ldoras para aprender a programar. Cada
frasco contiene 75 p�ldoras y cada p�ldora contiene 45 mg de Betamol, 2 grs de
Micilina y 7 mg de �cido Sin�tico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un
pedido y muestre la cantidad de miligramos de Betamol, Micilina y de �cido
Sin�tico que son necesarios para elaborarlos.*/


#include <iostream>
using namespace std;
const int PASTILLAS = 75, BETAMOL = 45, MICILINA = 2, SINITICO = 7;

int main(){
    int totalPastillas,grBetamol, grMicilina, grSintinico, frascos;


    cout << "Ingrese la cantidad de frascos de un pedido " << endl;
    cin >> frascos;
    totalPastillas = frascos * PASTILLAS;
    grBetamol = totalPastillas * BETAMOL;
    grMicilina = totalPastillas * MICILINA;
    grSintinico = totalPastillas * SINITICO;

    cout << "Para producir " << frascos << " frascos de pildoras, se necesitan :" << endl;
    cout << grBetamol << " grs de Betamol " << endl << grMicilina << " grs de Micilina" << endl<< grSintinico << " grs de Acido Sintinico " << endl;




return 0;
}
