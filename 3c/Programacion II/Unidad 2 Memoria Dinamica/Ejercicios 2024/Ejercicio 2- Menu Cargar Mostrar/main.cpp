#include <iostream>
#include <ctime>
using namespace std;

void cargarVector(int *&vec, int &tam);
void mostrarVector(int *vec, int tam);

int main() {
    int tam = 0, op;
    int *vecEnteros = nullptr;
    srand(time(0)); // Inicializa la semilla para valores aleatorios

    do {
        system("clear");
        cout << "----Menu----" << endl;
        cout << "1) Cargar Vector" << endl;
        cout << "2) Mostrar Vector" << endl;
        cout << "3) Salir" << endl;
        cout << "----------------" << endl;
        cout << "ELIJA OPCION: ";
        cin >> op;

        switch(op) {
            case 1:
                cargarVector(vecEnteros, tam);
                break;

            case 2:
                if (vecEnteros != nullptr) {
                    mostrarVector(vecEnteros, tam);
                } else {
                    cout << "El vector no ha sido cargado." << endl;
                }
                break;

            case 3:
                delete[] vecEnteros; // Libera la memoria pedida
                vecEnteros = nullptr; // Establece el puntero a nullptr para evitar problemas futuros
                cout << "Saliendo del Programa..." << endl;
                break;

            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
                break;
        }
    } while (op != 3);

    return 0;
}

void cargarVector(int *&vec, int &tam) {
    cout << "¿Cuántos números desea ingresar? : ";
    cin >> tam;

    // Libera memoria si ya estaba asignada
    delete[] vec;

    vec = new int[tam]; // Asigna memoria para el array
    if (vec == nullptr) { // Verifica si la asignación fue exitosa
        cout << "ERROR DE ASIGNACIÓN DE MEMORIA" << endl;
        return;
    }

    for (int i = 0; i < tam; i++) {
        vec[i] = rand() % 1000 + 1; // Asigna un número aleatorio entre 1 y 1000
    }
}

void mostrarVector(int *vec, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << vec[i] << endl;
    }
}
