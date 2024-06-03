/*
6 Hacer una función que reciba un número entero por valor llamado día y un
string llamado nombre por referencia y le asigne el nombre correspondiente
según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/

#include <iostream>
using namespace std;

// Función que asigna el nombre del día de la semana según el número
void AsignarNombre(int dia, string &nombre) {
    switch(dia) {
        case 0:
            nombre = "Domingo";
            break;
        case 1:
            nombre = "Lunes";
            break;
        case 2:
            nombre = "Martes";
            break;
        case 3:
            nombre = "Miércoles";
            break;
        case 4:
            nombre = "Jueves";
            break;
        case 5:
            nombre = "Viernes";
            break;
        case 6:
            nombre = "Sábado";
            break;
        default:
            nombre = "Número de día inválido";
            break;
    }
}

int main() {
    setlocale(LC_ALL, "Spanish");

    int dia;
    string nombre;

    cout << "Ingrese un número de día entre 0 y 6: ";
    cin >> dia;

    // Llamada a la función que asigna el nombre del día
    AsignarNombreDia(dia, nombre);

    cout << "El nombre del día es: " << nombre << endl;

    return 0;
}
