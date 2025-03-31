#include "menu.h"
#include "funciones.h"
#include <iostream>

using namespace std;

int main()
{
    char tabla[4][4];

   inicializarTabla(tabla);
   desplegarMenu(tabla);

    return 0;
}
