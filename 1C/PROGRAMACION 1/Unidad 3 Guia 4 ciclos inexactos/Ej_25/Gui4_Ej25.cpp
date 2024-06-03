/*
25 El festival Larapalooza, el mejor festival musical del mundo, brindar� una serie
de conciertos distribuidos en tres jornadas distintas. Se desea un programa que
registre los artistas que participar�n. Por cada artista se registr�:
- N�mero de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duraci�n del show en minutos (entero)
La informaci�n no se encuentra ordenada bajo ning�n criterio. La carga de
datos se finaliza con un n�mero de artista igual a cero. Calcular e informar:
- El n�mero de artista que realice el show m�s largo de la jornada 1.
- La cantidad de solistas (artistas de 1 integrante) que participaron en
cada una de las jornadas. (se muestran tres resultados).
- La jornada m�s extensa (en minutos totales).
- Duraci�n promedio de show por artista (se muestra un resultado).
*/

#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");

	int numeroArtista, integrantes, jornada, duracion;
    int maxDuracionJornada1 = 0, numArtistaMaxDuracionJornada1 = 0;
    int cantSolistasJornada1 = 0, cantSolistasJornada2 = 0, cantSolistasJornada3 = 0;
    int duracionTotalJornada1 = 0, duracionTotalJornada2 = 0, duracionTotalJornada3 = 0;
    int cantArtistas = 0, duracionTotal = 0;
    float duracionPromedio;

    cout << "Ingrese el n�mero de artista (0 para finalizar): ";
    cin >> numeroArtista;

    while(numeroArtista != 0) {
        cout << "Ingrese la duraci�n del show en minutos: ";
        cin >> duracion;
        cout << "Ingrese la cantidad de integrantes: ";
        cin >> integrantes;
        cout << "Ingrese la jornada (1, 2 o 3): ";
        cin >> jornada;


        // A- El n�mero de artista que realice el show m�s largo de la jornada 1.
        if (jornada == 1 && duracion > maxDuracionJornada1) {
            maxDuracionJornada1 = duracion;
            numArtistaMaxDuracionJornada1 = numeroArtista;
        }

        // B- La cantidad de solistas por jornada
        if (integrantes == 1) {
            switch (jornada) {
                case 1:
                    cantSolistasJornada1++;
                    break;
                case 2:
                    cantSolistasJornada2++;
                    break;
                case 3:
                    cantSolistasJornada3++;
                    break;
            }
        }

        // C- La jornada m�s extensa (en minutos totales)
        switch (jornada) {
            case 1:
                duracionTotalJornada1 += duracion;
                break;
            case 2:
                duracionTotalJornada2 += duracion;
                break;
            case 3:
                duracionTotalJornada3 += duracion;
                break;
        }

        // D- Duraci�n promedio de show por artista
        duracionTotal += duracion;
        cantArtistas++;

        cout << "Ingrese el n�mero de artista (0 para finalizar): ";
        cin >> numeroArtista;
    }

    // A- El n�mero de artista que realice el show m�s largo de la jornada 1.
    cout << "El n�mero de artista con el show m�s largo de la jornada 1 es: " << numArtistaMaxDuracionJornada1 << endl;

    // B- La cantidad de solistas por jornada
    cout << "Cantidad de solistas en jornada 1: " << cantSolistasJornada1 << endl;
    cout << "Cantidad de solistas en jornada 2: " << cantSolistasJornada2 << endl;
    cout << "Cantidad de solistas en jornada 3: " << cantSolistasJornada3 << endl;

    // C- La jornada m�s extensa (en minutos totales)
    int duracionTotalMax = max(duracionTotalJornada1, max(duracionTotalJornada2, duracionTotalJornada3));
    if (duracionTotalMax == duracionTotalJornada1) {
        cout << "La jornada m�s extensa fue la 1 con una duraci�n total de " << duracionTotalJornada1 << " minutos." << endl;
    } else if (duracionTotalMax == duracionTotalJornada2) {
        cout << "La jornada m�s extensa fue la 2 con una duraci�n total de " << duracionTotalJornada2 << " minutos." << endl;
    } else {
        cout << "La jornada m�s extensa fue la 3 con una duraci�n total de " << duracionTotalJornada3 << " minutos." << endl;
    }

    // D- Duraci�n promedio de show por artista
    duracionPromedio = (float) duracionTotal / cantArtistas;
    cout << "Duraci�n promedio de show por artista: " << duracionPromedio << " minutos." << endl;

    return 0;
}


