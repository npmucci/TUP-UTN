#include "funciones.h"
#include <iostream>

using namespace std;

void inicializarTabla (char tabla[4][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i == j){
                tabla[i][j] = '-';
            }
            else{
                tabla[i][j] = '0';
            }
        }
    }
}

//Pide el número de dos jugadores que se enfrentaron y sus respectivos puntos
void cargarPuntos(char tabla [4][4]){
    int jugador1, jugador2;
    char puntos1, puntos2;
    bool jugar;

    do{
        jugar=true;
        cout << endl <<"Ingrese número del primer jugador (1-4):";
        cin >> jugador1;
        cout << "Ingrese número del segundo jugador (1-4):";
        cin >> jugador2;


        // Comprobar que los jugadores sean válidos
        if (jugador1 < 1 || jugador1 > 4 || jugador2 < 1 || jugador2 > 4){
            cout << "Número de jugador inválido. Debe estar entre 1 y 4." << endl;
            system("pause");
            system("cls");
            jugar=false;

        }else if(jugador1==jugador2){
            cout << " No se permiten partidos contra uno mismo" << endl;
            system("pause");
            system("cls");
            jugar=false;

        }else if (tabla[jugador1-1][jugador2-1] != '0'){
            cout << "Partido ya jugado entre J" << jugador1 << " y J" << jugador2 << ".\n";
            cout << "Partidos por jugar:\n";

            // Mostrar los partidos disponibles
            for (int i = 0; i < 4; i++){
                for (int j = i + 1; j < 4; j++){   // empiezo a recorrer las columnas en i+1 para no repetir los partidos J1vsJ2 y J2vsJ!
                    if (tabla[i][j] == '0'){
                        cout << "   J" << i + 1 << " vs J" << j + 1 << endl;
                    }
                }
            }
            system("pause");
        }

    }while(!jugar);

    //comprobar que no haya empate
    do{

        cout << "Ingrese puntos del primer jugador (1-4):";
        cin >> puntos1;
        cout << "Ingrese puntos del primer jugador (1-4):";
        cin >> puntos2;

        if (puntos1==puntos2){
            cout << "No puede haber empate, vulva a jugar e ingrese los nuevos puntos" << endl;
            system("pause");
            system("cls");

        }
    }while(puntos1==puntos2);

// cargo los puntos
    tabla[jugador1 - 1][jugador2 - 1] = puntos1;
    tabla[jugador2 - 1][jugador1 - 1] = puntos2;
}


void mostrarPuntos(char tabla[4][4]){
    // Imprimir encabezado de columnas
    cout << "   ";
    for (int i = 0; i < 4; i++){
        cout << "J" << i + 1 << "  ";
    }
    cout << endl;

    // Imprimir matriz con encabezado de filas
    for (int i = 0; i < 4; i++){
        cout << "J" << i + 1 << " ";
        for (int j = 0; j < 4; j++){
            cout << tabla[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;
}


