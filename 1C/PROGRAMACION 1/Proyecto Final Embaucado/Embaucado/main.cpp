#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rlutil.h"
#include "funciones.h"



int main()
{
    rlutil::hidecursor();
    srand(time(0)); // SEMILLA PARA EL RANDOM
    repartirCartas();

    return 0;
}
