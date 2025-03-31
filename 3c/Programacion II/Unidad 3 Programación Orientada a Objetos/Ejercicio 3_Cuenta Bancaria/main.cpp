#include <iostream>
#include "CuentaBancaria.h"
using namespace std;

int main()
{
    int op;
    float monto;
    CuentaBancaria cuenta1(234673, 200000);

    do
    {
        system("cls");

        // Mostrar el menú
        cout << endl;
        cout << " ---------------------- " << endl << endl;
        cout << "|  1-Consultar Saldo   |" << endl << endl;
        cout << "|  2- Depositar        |" << endl << endl;
        cout << "|  3-Retirar Dinero    |" << endl << endl;
        cout << "|  4- Salir            |" << endl << endl;
        cout << " ---------------------- " << endl << endl;
        cout << "Opcion: ";
        cin >> op;
        system("cls");
        switch(op)
        {
            case 1:
                cout << "Su saldo actual es: $ " << cuenta1.obtenerSaldo() << endl;
                system("pause");
                break;
            case 2:
                cout << "Ingrese el monto a depositar: $ ";
                cin >> monto;
                cuenta1.depositar(monto);
                cout << "Depósito realizado con éxito." << endl;
                system("pause");
                break;
            case 3:
                cout << "Ingrese el monto a retirar: $ ";
                cin >> monto;

                if (!cuenta1.retirar(monto))
                {
                    cout << "El saldo es insuficiente para realizar esta operación." << endl;
                    cout << "El monto máximo que puede retirar es: $ " << cuenta1.obtenerSaldo() << endl;
                }
                else
                {
                    cout << "Retiro realizado con éxito." << endl;
                }
                system("pause");
                break;
            case 4:
                cout << "Gracias por utilizar nuestros servicios..." << endl;
                system("pause");
                break;
            default:
                cout << "Opción no válida, por favor intente de nuevo." << endl;
                system("pause");
                break;
        }
    }
    while(op != 4);

    return 0;
}
