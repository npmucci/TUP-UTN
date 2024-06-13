#pragma once// evitar que un archivo.h se incluya dos veces

//.h estan las definiciones de las funciones
void desplegarMenu();
void implementarOpcion(int opcion);



///.CPP ==> #include "menu.h" - #include estructuras.h - #include "jugar.h"// implementaciones de las funciones
#include "jugar.h"
using namespace std;
void desplegarMenu(){
  int opcion;

  do{
    cout <<endl << "EMBAUCADO" << endl;
    cout << "-------------------------" << endl;
    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADÍSTICAS" << endl;
    cout << "3 - CRÉDITOS" << endl;
    cout << "-------------------------" << endl;
    cout << "0 - SALIR" << endl;
    cout << "Ingrese su opción: ";
    cin >> opcion;

        implementarOpcion(opcion);

  }while(opcion != 0);


}

 void implementarOpcion(int opcion){
    //system("cls");
     switch(opcion){
        case 1: jugar();
            break;
        case 2://funcion estadisticas
            break;
        case 3: // creditos
            break;
        case 0:
            cout << "-------------------------" << endl;
            cout << "SALIENDO DEL JUEGO. GRACIAS POR JUGAR EMBAUCADOS" << endl;
            break;
        default:
        cout << "Error " << opcion << " no es un número valido" << endl;
        system("pause");
        system ("cls");

     }
    system("cls");
 }
