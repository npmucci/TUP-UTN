#include <iostream>
#include <ctime>
using namespace std;
/*Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego de cargar todas las notas:

A-Pedir un número y mostrar por pantalla la nota registrada.
Por ejemplo, se ingresa 10 para mostrar el décimo examen.

B-Listar cuántos estudiantes obtuvieron una nota mayor al promedio.
*/
void cargarNotas(int vec[]);
void mostrarNota(int vec[], int pos);
float calcularPromedio(int vec[]);
int notasMayorPromedio(int vec[]);

int main()
{
    srand(time(0)); // SEMILLA PARA EL RANDOM
    int notas[78];
    int estudiante,cantMayorPromedio;
    cargarNotas(notas);

    ///PUNTO A
    cout << "Ingrese el número de estudiante del que quiere ver la nota ";
    cin >> estudiante;
    mostrarNota(notas,estudiante);
    cout << endl << endl;

    ///PUNTO B
    cantMayorPromedio= notasMayorPromedio(notas); ///guardo directamente el retorno de la funcion en la variable
    cout << "La cantidad de estudiantes que tuvieron notas mayores al promedio fueron :" << cantMayorPromedio;
    return 0;
}

void cargarNotas(int vec[])
{
    for(int i=0; i<78; i++)
    {
        vec[i]= rand() % 9+1;
    }
}

void mostrarNota(int vec[], int pos)
{
    cout << "La nota del estudiante " << pos << " es:" << vec[pos-1];

}

float calcularPromedio (int vec[])
{
    int totalNotas=0;

    for(int i=0; i<78; i++)
    {
        totalNotas+=vec[i];
    }
    return ((float)totalNotas/78);

}

int notasMayorPromedio(int vec[])
{
    float promedio;
    int contador=0;
    promedio=calcularPromedio(vec);///aca llamo a la funcion de calcular promedio y guardo el resultado en la variable


    for(int i=0; i<78; i++)
    {
        if(vec[i]>promedio)
        {
            contador++;
        }
    }
    return contador;
}




