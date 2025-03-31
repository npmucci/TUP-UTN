#include "funciones.h"
#include <iostream>

using namespace std;

void desplegarMenu(char tabla[4][4]){

    int opcion;

  do{



    cout << endl<< "-------------------------" << endl;
    cout << endl<<"1 - CARGAR PUNTOS" << endl;
    cout << endl<<"2 - MOSTRAR TABLA" << endl;
    cout << endl<<"3 - REINICIAR CAMPEONATO" << endl;
    cout <<endl<< "-------------------------" << endl;
    cout << endl<< "0 - SALIR" << endl;
    cout << endl << "Ingrese su opcion: ";
    cin >> opcion;



    implementarOpcion(opcion,tabla);

  }while(opcion != 0);
}

void implementarOpcion(int op, char tabla[4][4]){
    char respuesta;
  system("cls");

  switch(op)
  {
    case 1:
     cargarPuntos(tabla);
      system("cls");
      break;

    case 2:

      mostrarPuntos(tabla);
       system("pause");
        system ("cls");

      break;
    case 3:
     inicializarTabla(tabla);

      break;
    case 0:

      cout << "REALMENTE QUERES SALIR DEL JUEGO (S/N)?";
      cin >> respuesta;
      if( respuesta=='s'|| respuesta=='S'){

        cout << "SALIENDO DEL JUEGO" << endl;

      }
      else{
        desplegarMenu(tabla);
      }

      break;

    default:
      cout << "ERROR: opcion no  valida." << endl;
        system("pause");
        system ("cls");
      break;


  }


}
