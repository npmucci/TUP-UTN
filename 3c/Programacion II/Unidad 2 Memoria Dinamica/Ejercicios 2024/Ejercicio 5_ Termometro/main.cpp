#include <iostream>
#include "Termometro.h"
using namespace std;

int main() {
    // Crear un objeto Termometro con temperatura inicial de 100 grados Fahrenheit
    Termometro termometro(100, 'F');

    // Mostrar la temperatura y la unidad actuales
    cout << "Temperatura inicial: " << termometro.getTemperatura() << " " << termometro.getUnidad() << std::endl;

    // Cambiar la unidad a Celsius
    termometro.cambiarUnidad('C');

    // Mostrar la nueva temperatura y la unidad tras la conversión
    cout << "Temperatura despues de cambiar a Celsius: " << termometro.getTemperatura() << " " << termometro.getUnidad() << std::endl;

    // Cambiar la unidad de vuelta a Fahrenheit
    termometro.cambiarUnidad('F');

    // Mostrar la nueva temperatura y la unidad tras la conversión
    cout << "Temperatura despues de cambiar a Fahrenheit: " << termometro.getTemperatura() << " " << termometro.getUnidad() << std::endl;

    return 0;
}
