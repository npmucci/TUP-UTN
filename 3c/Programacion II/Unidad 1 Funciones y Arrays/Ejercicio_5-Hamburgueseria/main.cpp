#include <iostream>

using namespace std;
/*
La mundialmente conocida hamburguesería Coco’s Burger desea registrar la información de las ventas
de la primera semana de Agosto 2023 de su local ubicado en Canelones, Uruguay.

Por cada venta se registra:
•    Código de hamburguesa (entero de 1 a 5)
•    Día (entero de 1 - Lunes a 7 - Domingo)
•    Cantidad vendida (entero)
•  Tipo de Acompañamiento ('B' – con batatas / 'P' – con papas
'C' – Aros de cebolla / 'X' – sin acompañamiento)

Pueden existir varios registros de ventas para la misma hamburguesa.
 El fin de la carga de datos se indica con un código de hamburguesa igual a 0.

A este lote se le precede otro ordenado por número de hamburguesa con la siguiente información:
•    Código de hamburguesa (1 a 5)
•    Precio (float)
•    Stock al comienzo de la semana (entero)

Se pide determinar e informar:
A)Por cada hamburguesa, la cantidad de unidades vendidas y el total recaudado.
B)La hamburguesa más vendida el viernes.
C)Los días que se vendieron hamburguesas acompañadas de Batatas pero
no se vendieron hamburguesas acompañadas de Aros de Cebolla.
D)Las hamburguesas que lograron un sold out (vendieron todo)
E)Por cada día y acompañamiento, la cantidad de hamburguesas vendidas.

*/
int obtenerIndiceAcompanamiento(char tipoAcompanamiento);

int main()
{
    int codHamburguesa[5];
    float precioHamburguesa[5];
    int stockInicial[5];
    int codigo,dia, cantidad;
    char acompaniamiento;
    string dias[7] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    string tiposAcomp [4]={"Batatas","Papas","Aros de Cebolla","Sin Acompaniamiento"};

    /// Variables punto A
    int totalUnidadesVendidas[5] = {};
    float totalRecaudado[5] = {};

    ///Variables punto B
    int tipoHamburguesaDia [5][7]= {};
    int cantidadMax, hamburguesaMax;

    /// Variables punto C y E
    int diaAcomp [7] [4] = {0};


    // Cargar datos de las hamburguesas (precio y stock inicial)
    for (int i = 0; i < 5; i++)
    {
        cout << "Codigo de hamburguesa: " << i +1 << endl;
        codHamburguesa[i] = i + 1;
        cout << "Ingrese precio $";
        cin >> precioHamburguesa[i];
        cout << "Ingrese stock al comienzo de la semana: ";
        cin >> stockInicial[i];
    }
    cout << "--------------------------------------------" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Ingrese codigo de hamburguesa (1 a 5, 0 para finalizar): ";
    cin >> codigo;

    while (codigo!=0)
    {

        cout << "Ingrese dia de la semana (1 a 7): ";
        cin >> dia;
        cout << "Ingrese cantidad vendida: ";
        cin >> cantidad;
        cout << "Ingrese tipo de acompañamiento ('B' -batatas / 'P' -papas /'C' – Aros de cebolla / 'X' – sin acompañamiento)): ";
        cin >> acompaniamiento;

        ///calculo punto A
        totalUnidadesVendidas[codigo-1]+=cantidad;
        totalRecaudado[codigo-1]+= (cantidad* precioHamburguesa[codigo-1]);

        ///Punto B
        tipoHamburguesaDia [codigo-1][dia-1]+= cantidad;

        ///Punto C como los acompaniamientos son chart, uso una funcion para ver a que indice corresponde cada letra
        int indexAcomp = obtenerIndiceAcompanamiento(acompaniamiento);
        diaAcomp[dia-1][indexAcomp]+=cantidad;


        ///Punto D
        stockInicial[codigo-1]-=cantidad;


        cout << "Ingrese codigo de hamburguesa (1 a 5, 0 para finalizar): ";
        cin >> codigo;

    }

    /// Mostrar resultados punto A
    for (int i = 0; i < 5; i++)
    {
        cout << "Hamburguesa " << i+1 << ": " << totalUnidadesVendidas[i]
             << " unidades vendidas, Total recaudado: $" << totalRecaudado[i] << endl;
    }

    ///Calcular y mostrar punto B
    cantidadMax = tipoHamburguesaDia[0] [4];
    hamburguesaMax = 0;
    for (int i = 1; i < 5; i++)
    {
        if (tipoHamburguesaDia[i][4] > cantidadMax)
        {
            cantidadMax = tipoHamburguesaDia[i][4];
            hamburguesaMax = i;
        }
    }

    ///Mostrar punto C
    for (int i=0; i<7; i++){
		if(diaAcomp[i][0]>0 &&diaAcomp[i][2]==0){
			cout << "El dia " << dias[i] << "se vendieron hamburguesas acompañadas de Batatas pero no se vendieron hamburguesas acompañadas de Aros de Cebolla" << endl;
		}
    }

    cout << "La hamburguesa mas vendida el dia viernes fue la de código # " << hamburguesaMax + 1 << endl;

    ///Mostrar punto D
    for (int i=0;i<5;i++){
        if(stockInicial[i]==0){
            cout << "La hamburguesa codigo # " << i+1 << " se vendio en su totalidad" << endl;
        }
    }
    ///Mostrar punto E
    for(int i=0;i<7;i++){
		for (int j=0; j<4;j++){
			cout << "Dia:         " << dias[i] << endl;
			cout << "Tipo de acompañamiento:       " << tiposAcomp[j] << endl;
			cout << "Cantidad de Hamburguesas Vendidas: " << diaAcomp[i][j] <<endl;
			cout << "----------------------------------------------" << endl;
		}
    }

    return 0;
}
int obtenerIndiceAcompanamiento(char tipoAcompanamiento) {
    switch (tipoAcompanamiento) {
        case 'B':  // Batatas
            return 0;
        case 'P':  // Papas
            return 1;
        case 'C':  // Aros de cebolla
            return 2;
        case 'X':  // Sin acompañamiento
            return 3;
        default:   // Tipo no válido
            return -1;
    }
}
