#include <iostream>
#include <ctime>
using namespace std;

/// 05

/// Un individuo acaba de obtener su álbum de figuritas de DragonCube. Se trata de un libro
/// cuyas páginas cuentan con espacios en blanco designados para pegar50 figuritas.
/// Estos espacios en blanco están numerados y cada uno de ellos está reservado para una figurita
/// en particular, identificada con el mismo número. Luego de obtener el álbum, el coleccionista
/// comienza a comprar paquetes de figuritas que contienen, cada uno, 5 unidades. Los paquetes
/// vienen identificados con un número natural como código.
/// Las figuritas, además de estar numeradas, se clasifican por:
///     Tipo de figurita:
///     - Común (C)
///     - Holograma (H)
/// Se pide realizar un programa que permita registrar, por cada paquete, la información de las 5 figuritas.
/// Los registros tienen la siguiente estructura:
///     - Número de paquete (entero)
///     - Número de figurita (1 a 50)
///     - Tipo de figurita (C o H)
///     - ¿Pegar en el álbum? (S/N)
/// No hay límites en la cantidad de paquetes que el coleccionista pueda comprar. La carga de datos finaliza
/// con un número de paquete igual a 0. Calcular e informar:
///     A) La cantidad de figuritas comunes repetidas.
///     B) La cantidad de figuritas faltantes del álbum.
///     C) La cantidad de hologramas entre las figuritas compradas (sin contar las repetidas).
///     D) El estado del álbum pudiendo ser uno de los siguientes casos:
///     - "Incompleto" si no se llegaron a pegar las 50 figuritas.
///     - "Completo" si se llegaron a pegar las 50 figuritas entre comunes y hologramas.
///     - "Completo común" si está completo pero además tiene las 50 figuritas comunes pegadas.
///     - "Completo holográfico" si está completo pero además tiene las 50 figuritas hologramas pegadas.
///     E) Teniendo en cuenta que cada paquete cuesta $500 y que cada figurita común se puede vender a $20 y
///     cada holograma a $50. Calcular el costo total de la colección y el costo total de una potencial
///     venta de figuritas no pegadas de la colección.

///     Aclaraciones:
///     - Cuando se carga los datos de un paquete se debe solicitar la información de las cinco figuritas que
///     incluye el paquete.
///     - El álbum tiene 50 figuritas en total pero los paquetes pueden traer de cada una la variante común
///     y holograma. En total son 100 figuritas distintas.
///     - El coleccionista puede decidir si pega en el álbum figuritas comunes y hologramas, sólo comunes o
///     sólo hologramas. Cada espacio del álbum sin figuritas es una figurita faltante.
///     - Las figuritas que el coleccionista no pega en el álbum son parte de su colección en una pila aparte.
///     Si el coleccionista tiene la figurita #1 varias veces pero nunca la pegó en el álbum entonces el álbum
///     no puede considerarse completo.
///     - Se considera una figurita repetida si tiene la misma figurita del mismo tipo más de una vez.
///     Por ejemplo, si tengo la figurita #1 común y #1 holograma en mi colección, no la tengo repetida. Sin embargo,
///     si tres veces tengo la figura #1 holograma en mi colección entonces la tengo repetida DOS veces.


/// DECLARACION DE FUNCIONES ----------------------
void mostrarAlbum(char vAlbum[], bool& lleno);
int contarRepetidas(int repetidas[][2], int num);
int contarFaltantes(char vAlbum[]);
int contarHologramas(char vAlbum[], int repetidas[][2]);



int main(){

    char vAlbum[50]{}; /// ALBUM
    int repetidas[50][2]{}; /// MATRIZ DE REPETIDOS [Comunes][Hologramas]

    int numPaq = 0;
    int numFig, opcion = 1;
    char tipo , pegar;
    bool lleno = false;

    srand(time(0)); /// Inicializo semilla para valores random.

    while(lleno == false && opcion != 0)
    {
        numPaq++;
        cout << " -------Paquete de figuritas #" << numPaq << endl;
        for(int i = 0; i < 5; i++)
        {
            numFig = rand() % 50 + 1;
            cout << "Ingrese num de figurita obtenida: " << numFig << endl;
            //cin >> numFig;

            /// DEFINO TIPO DE FIGURITA ALEATORIAMENTE.
            int tip = rand() % 2;
            if(tip != 0)
            {
                tipo = 'c';
            }
            if(tip == 0)
            {
                tipo = 'h';
            }
            cout << "Ingrese tipo de figurita (C comun / H holograma): " << tipo << endl;
            //cin >> tipo;

            /// DEFINO SI PEGO O NO LA FIGURITA ALEATORIAMENTE.
            tip = rand() % 2 + 1;
            if(tip == 1)
            {
                pegar = 's';
            }
            if(tip == 2)
            {
                pegar = 'n';
            }
            cout << "Desea pegarla en el album? (S/N): " << pegar << endl;
            //cin >> pegar;

            /// DECIDO SI PEGO O NO LA FIGURITA
            if(pegar == 's') /// En caso de pegar la figurita
            {
                switch(tipo)
                {
                    case 'c':
                    case 'C':
                        if(vAlbum[numFig-1] == 'c' || vAlbum[numFig-1] == 'h') /// Pregunto si ya la tengo pegada.
                        {
                            repetidas[numFig-1][0]++; /// Cargo la comun repetida a la matriz de repetidas.
                        }
                        else
                        {
                            vAlbum[numFig-1] = 'C'; /// En caso de no tenerla pegada la ubico cargandola en el vector del album.
                        }
                    break;
                    case 'h':
                    case 'H':
                        if(vAlbum[numFig-1] == 'c' || vAlbum[numFig-1] == 'h') /// Pregunto si ya la tengo pegada.
                        {
                            repetidas[numFig-1][1]++; /// Cargo la holograma repetida a la matriz de repetidas.
                        }
                        else
                        {
                            vAlbum[numFig-1] = 'H'; /// En caso de no tenerla pegada la ubico cargandola en el vector del album.
                        }
                    break;
                }
            }
            if(pegar == 'n') /// En caso de no pegarla.
            {
                switch(tipo)
                {
                    case 'c':
                    case 'C':
                        repetidas[numFig-1][0]++; /// La cargo en el indice de comunues de la matriz de repetidas.
                    break;
                    case 'h':
                    case 'H':
                        repetidas[numFig-1][1]++; /// La cargo en el indice de comunues de la matriz de repetidas.
                    break;

                }
            }
            cout << endl;

        }/// FIN DE FOR

        mostrarAlbum(vAlbum, lleno);

            cout << "INGRESE UN NUMERO PARA CONTINUAR (O 0 PARA FINALIZAR LA CARGA): ";
            cin >> opcion;
            system("clear");


    }/// FIN DE WHILE


    cout << "\n\n--- Punto A:" << endl;
    /// PUNTO A
    /// A) La cantidad de figuritas comunes repetidas.
    int repes = contarRepetidas(repetidas, 0);
    cout << "La cantidad de figuritas comunes repetidas es: " << repes << endl;


    cout << "\n\n--- Punto B:" << endl;
    /// PUNTO B
    /// B) La cantidad de figuritas faltantes del álbum.
    int faltantes = contarFaltantes(vAlbum);
    cout << "La cantidad de figuritas que faltan para completar el album es de: " << faltantes << endl;

    cout << "\n\n--- Punto C:" << endl;
    /// PUNTO C
    /// C) La cantidad de hologramas entre las figuritas compradas (sin contar las repetidas).
    int Hcompradas = contarHologramas(vAlbum, repetidas);
    cout << "La cantidad de hologramas obtenidas sin repetir es de: " << Hcompradas << endl;

    cout << "\n\n--- Punto D:" << endl;
    /// PUNTO D
    /// D) El estado del álbum pudiendo ser uno de los siguientes casos:
    ///     - "Incompleto" si no se llegaron a pegar las 50 figuritas.
    ///     - "Completo" si se llegaron a pegar las 50 figuritas entre comunes y hologramas.
    ///     - "Completo común" si está completo pero además tiene las 50 figuritas comunes pegadas.
    ///     - "Completo holográfico" si está completo pero además tiene las 50 figuritas hologramas pegadas.
    int figusC = 0;
    int figusH = 0;
    if(lleno)
    {
        for(int i = 0; i < 50; i++)
        {
            if(vAlbum[i] == 'C')
            {
                figusC++;
            }
            else
            {
                figusH++;
            }
        }
        if(figusC == 50)
        {
            cout << "ESTADO del album: COMPLETO COMUN" << endl;
        }
        else if(figusH == 50)
        {
            cout << "ESTADO del album: COMPLETO HOLOGRAFICO" << endl;
        }
        else
        {
            cout << "ESTADO del album: COMPLETO" << endl;
        }
    }
    else
    {
        cout << "ESTADO del album: INCOMPLETO" << endl;
    }

    cout << "\n\n--- Punto E:" << endl;
    /// PUNTO E
    /// E) Teniendo en cuenta que cada paquete cuesta $500 y que cada figurita común se puede vender a $20 y
    ///    cada holograma a $50. Calcular el costo total de la colección y el costo total de una potencial
    ///    venta de figuritas no pegadas de la colección.
    int aux = repes; // Variable auxiliar para guardar valor que contenia "repes" cuando conte las repetidas comunes del PUNTO A.
    repes = contarRepetidas(repetidas, 1);
    cout << "Comunes repetidas: " << aux << ". Con un valor total de: $" << aux*20 << "." << endl;
    cout << "Hologramas repetidas: " << repes << ". Con un valor total de: $" << repes*50 << "." << endl;
    cout << "TOTAL INVERTIDO: $" << numPaq*500 << "." << endl;
    cout << "POTENCIAL VENTA: $" << (aux*20) + (repes*50) << "." << endl;


return 0;
}


/// DEFINICION DE FUNCIONES -----------------------------------
void mostrarAlbum(char vAlbum[], bool& lleno)
{
    int cont = 0;
    for(int i = 0; i < 50; i++)
    {
        cout << "Figurita #"<< i+1 <<": " << vAlbum[i] << endl;
        if(vAlbum[i] == 'C' || vAlbum[i] == 'H')
        {
            cont++;
        }
    }
    if(cont == 50)
    {
        lleno = true;
    }
    cout << endl;
}

int contarRepetidas(int repetidas[][2], int num)
{
    int cont = 0;
    for(int i = 0; i < 50; i++)
    {
        cont += repetidas[i][num];
    }
    return cont;
}

int contarFaltantes(char vAlbum[])
{
    int cont = 0;
    for(int i = 0; i < 50; i++)
    {
        if(vAlbum[i] != 'H' && vAlbum[i] != 'C' )
        cont++;
    }
    return cont;
}

int contarHologramas(char vAlbum[], int repetidas[][2])
{
    int cont = 0;
    for(int i = 0; i < 50; i++)
    {
        if(vAlbum[i] == 'H' || repetidas[i][1] != 0)
        {
            cont++;
        }
    }
    return cont;
}
