#pragma once


void jugar();
void cargarNombre(Jugador &j1, Jugador &j2);
void inicializarMazo(Carta vMazo[TAM_BARAJA_FRANCESA]);
void mostrarMazoEnMesa(Carta vMazo[TAM_BARAJA_FRANCESA]);
void mezclarMazo(Carta vMazo[TAM_BARAJA_FRANCESA]);




///.cpp
#include <iomanip>
using namespace std;

void jugar (){
Jugador jugador1, jugador2;/// declaro dos jugadores
Carta vMazo[TAM_BARAJA_FRANCESA]; //// declaro el mazo de tam 20 --> string valor y string palo

cargarNombre(jugador1, jugador2);/// cargo nombre con sus valores
inicializarMazo(vMazo);///inicalizo el mazo

mostrarMazoEnMesa(vMazo);// mustra el mazo ordenado
mezclarMazo(vMazo);/// mezclamos el mazo de cartas
mostrarMazoEnMesa(vMazo);


}

void cargarNombre(Jugador &j1, Jugador &j2){
    char confirmacion;

    do{
        cout << "EMBAUCADO" << endl;
        cout <<"-------------------------------------------------------------------------"<< endl;
        cout << "Antes de comenzar deben registrar sus nombres: " << endl << endl;
        cout << "Nombre del Jugador 1? ";
        cin.ignore();// cuando se viene de un cin esta funcion limpia el enter que  trae de antes (cuando elijo la opcion)
        getline(cin, j1._nombre);

        while(j1._nombre.length() >15){ // funcion para comparar el largo del nombre
            cout << "ERROR. El nombre puede tener hasta 15 caracteres" << endl;
            cout << "Nombre del Jugador 1? ";
            getline(cin, j1._nombre);
        }
        j1._turno=1;// seteo el turno del jugador para utilizar en las rondas
        cout << "Nombre del Jugador 2? ";
        getline(cin, j2._nombre);

        while(j2._nombre.length()>15){
            cout << "ERROR. El nombre puede tener hasta 15 caracteres" << endl;
            cout << "Nombre del Jugador 2? ";
            getline(cin, j2._nombre);
        }
        j2._turno=2;/// seteo el turno del jugador para utilizar en las rondas

        cout << "\n¿Confirmar los nombres? (S/N): ";
        cin >> confirmacion;

        while(confirmacion != 'S' && confirmacion != 's' && confirmacion != 'N' && confirmacion != 'n'){///validación de entrada de datos
        cout << "ERROR solo se admite 'S' o 'N'" << endl;
        cout << "\n¿Confirmar nombres? (S/N): ";
        cin >> confirmacion;
      }
      if(confirmacion == 'N' || confirmacion == 'n'){
        cout << "Ingrese los nombres nuevamente\n";
        system("pause");
        system("cls");
       }else{
        cout << "\n------------------------------------------------------------------------" << endl;
       }
        system("cls");

    }while(confirmacion != 'S' && confirmacion != 's');/// se contemplan las opciones de máyuscula y miníscula

}

//Esta funcion inicializa el mazo de fabrica
void inicializarMazo(Carta vMazo[TAM_BARAJA_FRANCESA]){
  for (int i = 0; i < TAM_BARAJA_FRANCESA; i++)
  {
    vMazo[i] = {PALOS[i / TAM_VALOR], VALORES[i % TAM_VALOR]};
  }                   //0/5 = [0] = "corazon", 0%5[0] = "10"
                      //1/5 = [0] = "corazon", 1%5[1] = "J"
                      //2/5 = [0] = "corazon", 2%5[2] = "Q"
                      //3/5 = [0] = "corazon", 3%5[3] = "K"
                      //4/5 = [0] = "corazon", 4%5[4] = "A"
                      //5/5 = [1] = "diamante", 5%5[0] = "10"
                     //19/5 = [3] = "trebol", 19%5[4] = "A"
}


void mostrarMazoEnMesa(Carta vMazo[TAM_BARAJA_FRANCESA])
{
  cout << "+--------------------+" << endl;
  cout << "|                    |" << endl;

  for (int x = 0; x < TAM_BARAJA_FRANCESA; x++)
  {
      cout << "|     "<< vMazo[x]._valor << " " << vMazo[x]._palo
            << setw(15 - vMazo[x]._valor.length() - vMazo[x]._palo.length()) << "|" << endl;
      ///15 es el ancho total deseado.
  }  ///.length devuelve la longitud de la cadena. => estas son restadas al ancho de 15
  cout << "|                    |" << endl;
  cout << "+--------------------+" << endl;

  system ("pause");

}

 void mezclarMazo(Carta vMazo[TAM_BARAJA_FRANCESA]){
  cout << "Mezclando el mazo" << endl;
  system("pause");

  int numAleatorio1, numAleatorio2;

  Carta aux;

  for(int x = 0; x < 1000; x++){
      numAleatorio1 = rand() % TAM_BARAJA_FRANCESA;//va de 0 a 19 las posiciones del mazo
      numAleatorio2 = rand() % TAM_BARAJA_FRANCESA;//va de 0 a 19 las posiciones del mazo
      aux = vMazo[numAleatorio1];/// guardo en una variable auxiliar la carta que esta en la posicion aleatoria 1
      vMazo[numAleatorio1] = vMazo[numAleatorio2]; // donde estaba la carta de la posicion aleatoria 1, guardo una carta que esta en posicion aleatoria 2
      vMazo[numAleatorio2] = aux;// donde estaba la carta de posicion aleatoria 2 guardo la carta que estaba en posicion aleatoria 1(intercambio las cartas)

  }


}


