#include <iostream>

using namespace std;

int main() {
    int codVenta, dia, mes, cantidadMesesSinVenta = 0;
    float ventaMonto;

    // Array para almacenar la recaudación diaria
    float recaudacion[12][31] = {}; // Inicializado en 0 por defecto

    // Solicitar el código de venta
    cout << "Ingrese codigo de venta (0 para finalizar): ";
    cin >> codVenta;

    while (codVenta != 0) {
        // Solicitar mes, día y monto de venta sin validaciones
        cout << "Ingrese mes de venta (1-12): ";
        cin >> mes;
        cout << "Ingrese dia de venta (1-31): ";
        cin >> dia;
        cout << "Ingrese monto de venta: ";
        cin >> ventaMonto;

        // Acumular el monto de la venta en el array
        recaudacion[mes - 1][dia - 1] += ventaMonto;

        // Solicitar el próximo código de venta
        cout << "Ingrese codigo de venta (0 para finalizar): ";
        cin >> codVenta;
    }

    // Procesar la recaudación y contar meses sin ventas
    for (int m = 0; m < 12; m++) {
        bool hayVenta = false;
        for (int d = 0; d < 31; d++) {
            if (recaudacion[m][d] != 0) {
                cout << "Mes #" << m + 1 << " Dia #" << d + 1 << ": $" << recaudacion[m][d] << endl;
                hayVenta = true;  // Se registró una venta en este mes
            }
        }

        if (!hayVenta) {
            cantidadMesesSinVenta++;  // Solo incrementar si no hubo ventas en todo el mes
        }
    }

    // Mostrar los resultados finales
    cout << "La cantidad de meses sin venta son: " << cantidadMesesSinVenta << endl;
    cout << "La recaudacion del dia 5 del mes de junio es: $" << recaudacion[5][4] << endl;

    return 0;
}
