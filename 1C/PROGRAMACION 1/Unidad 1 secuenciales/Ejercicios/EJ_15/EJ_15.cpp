/*15 La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
temperatura m�nima en una zona y tiempo determinado. Dada la temperatura
m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la
amplitud t�rmica.
NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al
de la temperatura m�nima.*/

#include <iostream>
using namespace std;

int main(){
    float tMax, tMin, aTermica;

    cout << "Ingrese la temperatura maxima y la temperatura minima de San Fernando" << endl;
    cin >> tMax >> tMin;
    aTermica = tMax - tMin;

    cout << "La amplitud termica de San Fernando es : " << aTermica << " C�";

return 0;
}
