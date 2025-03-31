#include <iostream>
#include "Usuario.h"

using namespace std; // Para evitar usar std:: cada vez

int main() {
    Usuario bdUsuarios[5] = {
        Usuario("Natalia", "abc123", "admin"),
        Usuario("Patricia", "qwe123", "user"),
        Usuario("Miguel", "123mal", "user"),
        Usuario("Gaston", "123arc", "admin"),
        Usuario("Erica", "2024eng", "admin")
    };

    int contador = 0;
    int numero;
    string nombre, clave;

    do {
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cout << "Ingrese la clave: ";
        cin >> clave;

        numero = verificarUsuario(bdUsuarios, 5, nombre, clave);

        if (numero != -1) {
            imprimirMensaje(bdUsuarios[numero]);
            break;
        } else {
            cout << "Los datos ingresados son incorrectos" << endl;
            contador++;
            cout << "Le quedan " << 3 - contador << " intentos" << endl;
        }

    } while (contador < 3);

    if (contador >= 3) {
        cout << "Ha superado el máximo de intentos posibles" << endl;
    }

    return 0;
}
