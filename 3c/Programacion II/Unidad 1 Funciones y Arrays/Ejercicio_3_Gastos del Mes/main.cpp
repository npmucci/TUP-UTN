#include <iostream>
#include <iomanip> // Para std::setw y std::left
using namespace std;

/*
3	Una persona desea registrar los gastos realizados durante un mes. Ha definido que los gastos se pueden categorizar en:

ID de Categoría	Nombre de categoría
1	Servicios
2	Alimentación
3	Limpieza
4	Transporte
5	Educación
6	Salud
7	Ocio
8	Impuestos
9	Vestimenta
10	Inversiones

Por cada gasto registrado se ingresa el siguiente registro:
- Día (número entero)
- ID de Categoría de gasto (número entero entre 1 y 10)
- Importe del gasto (número real)

La información no se encuentra agrupada ni ordenada. No se sabe de antemano cuántos registros de gastos habrá.
El fin de la carga de información se indica con un día igual a cero.

Calcular e informar:
A) La categoría de gasto que mayor dinero se haya destinado y cuál es dicha categoría.
B) Por cada categoría de gasto, el nombre de la categoría y el total acumulado en concepto de gastos del mes.
C) La cantidad de categorías de gasto que no hayan registrado movimientos.
D) Por cada día, la cantidad de gastos que se hayan registrado.
Sólo mostrar aquellos registros de días que hayan registrado gastos.


*/
string determinarCategoria(int categoria);

int main() {
     setlocale(LC_ALL, "Spanish");
    int dia, id;
    float importe;
    float gastosPorDia[31] = {};  // Vector para registrar los gastos por día
    float totalGasto[10] = {};    // Vector para acumular los gastos por categoría
    float gastoMayor = 0;
    int categoriaMayor = 0, catSinGastos = 0;

    cout << "Ingrese un día (0 para finalizar): ";
    cin >> dia;

    while (dia != 0) {
        cout << "Ingrese el ID de Categoría de gasto (número entero entre 1 y 10): ";
        cin >> id;

        cout << "Ingrese el importe del gasto $ ";
        cin >> importe;

        gastosPorDia[dia - 1]++;  // Contar el número de gastos por día
        totalGasto[id - 1] += importe;  // Acumular el total de gastos por categoría

        cout << "Ingrese un día (0 para finalizar): ";
        cin >> dia;
    }

    // Punto A y C: Calculo
    for (int i = 0; i < 10; i++) {
        // Punto A: Determinar la categoría con mayor gasto
        if (totalGasto[i] > gastoMayor) {
            gastoMayor = totalGasto[i];
            categoriaMayor = i + 1;
        }
        // Punto C: Contar categorías sin gastos
        if (totalGasto[i] == 0) {
            catSinGastos++;
        }
    }

    // Punto A: Imprimir resultados
    cout << "\nCategoría con mayor gasto: " << determinarCategoria(categoriaMayor) << endl;
    cout << "Monto total en esta categoría: $" << fixed << setprecision(2) << gastoMayor << endl;

    // Punto B: Imprimir gastos por categoría
    cout << "\nGastos por categoría:\n";
    cout << left << setw(20) << "Categoría" << setw(20) << "Total Gastos del Mes" << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < 10; i++) {
        cout << left << setw(20) << determinarCategoria(i + 1)
             << setw(20) << fixed << setprecision(2) << totalGasto[i] << endl;
    }

    // Punto C: Mostrar categorías sin movimientos
    cout << "\nLa cantidad de categorías que no tuvieron movimientos fue: " << catSinGastos << endl;

    // Punto D: Imprimir gastos por día
    for (int i = 0; i < 31; i++) {
        if (gastosPorDia[i] > 0) {
            cout << "Día " << i + 1 << "   Cantidad de Gastos: " << gastosPorDia[i] << endl;
        }
    }

    return 0;
}

string determinarCategoria(int categoria) {
    switch (categoria) {
        case 1: return "Servicios";
        case 2: return "Alimentación";
        case 3: return "Limpieza";
        case 4: return "Transporte";
        case 5: return "Educación";
        case 6: return "Salud";
        case 7: return "Ocio";
        case 8: return "Impuestos";
        case 9: return "Vestimenta";
        case 10: return "Inversiones";
        default: return "Categoría desconocida";
    }
}





