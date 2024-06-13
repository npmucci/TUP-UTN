#include <iostream>
#include <cstdlib>
#include <ctime>//necesario para time(funcion random)
using namespace std;

#include "estructuras.h" ///libreria de menu
#include "menu.h" ///libreria de menu
#include "rlutil.h"

int main()
{
  setlocale(LC_ALL, "Spanish");
  //semilla o seed
  srand(time(0));

  Jugador jugador1, jugador2;

  ///FUNCION MENU()
  desplegarMenu();
    rlutil::locate(1,3);
    cout << "Hello world!" << endl;
    return 0;
}
