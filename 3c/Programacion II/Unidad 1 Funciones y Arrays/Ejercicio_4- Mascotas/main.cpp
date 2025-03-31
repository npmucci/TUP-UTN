#include <iostream>

using namespace std;

/*
4
Una fundación que se dedica a fomentar la adopción de mascotas dispone de los registros de adopciones
del año 2024. Por cada adopción que se haya efectuado se registró:
Mes de la adopción (entero entre 1 y 12)
Tipo de animal adoptado (entero entre 10 y 15)
Edad del adoptante responsable
Tipo de vivienda del adoptante responsable (entero entre 1 y 5)

La información no se encuentra agrupada ni ordenada bajo ningún criterio.
Para indicar el fin de la carga de datos se ingresa un mes de adopción igual a cero.

Se pide calcular e informar
a) El tipo de animal más adoptado en general.
b) El promedio de edad de los adoptantes de cada tipo de animal.
c) Por cada tipo de animal y tipo de vivienda la cantidad total de adopciones registradas.

Aclaración:
Los tipos de animales son:
10 - Perro, 11 - Gato, 12 - Conejo, 13 - Hurón, 14 - Caballo, 15 - Oveja

Los tipos de vivienda son:
1 - Casa, 2 - Departamento, 3 - Casa Quinta, 4 - Finca, 5 - Duplex

*/



int main()
{
    int mes, animal, edad, vivienda;
    string tipoAnimal [6]={"Perro","Gato","Conejo","Huron","Caballo","Oveja"};
    string tipoVivienda [5]={"Casa", "Departamento", "Casa Quinta", "Finca" ,"Duplex"};
    ///variables punto a
    int totalAnimalesAdoptados[6]={};
    int mayorAdopcion, masAdoptado;

    ///variables punto b
    int edadAdoptantes[6]={};

    ///variables punto c
   int tipoAnimalTipoVivienda[6][5] ={};


    cout << "Ingrese el mes de adopción (entre 1 y 12): ";
    cin >> mes;

    while(mes != 0){
    	cout << "Ingrese el tipo de animal adoptado (entre 10 y 15): ";
		cin >> animal;
		cout << "Ingrese la edad del adoptante: ";
		cin >> edad;
		cout << "Ingrese el tipo de vivienda del adoptante responsable (entre 1 y 5): ";
		cin >> vivienda;

		totalAnimalesAdoptados[animal-10]++;
		edadAdoptantes[animal-10]+=edad;
		tipoAnimalTipoVivienda [animal-10][vivienda-1]++;


	cout << "Ingrese el mes de adopción (entre 1 y 12): ";
    cin >> mes;
    }

    ///calcular y mostrar punto A
     mayorAdopcion=totalAnimalesAdoptados[0];
     masAdoptado=0;

     for(int i=1;i<6;i++){
		if(totalAnimalesAdoptados[i]>mayorAdopcion){
			mayorAdopcion=totalAnimalesAdoptados[i];
			masAdoptado= i;
		}
     }
     cout << "El animal mas adoptado fue :" << tipoAnimal [masAdoptado] <<endl;


     ///calcular y mostrar punto B

     for(int i = 0; i < 6; i++){
        if(totalAnimalesAdoptados[i] > 0) {
            cout << "Promedio de edad de los adoptantes de " << tipoAnimal[i] << ": "
                 << (float)edadAdoptantes[i] / totalAnimalesAdoptados[i] << endl;
        } else {
            cout << "No hubo adopciones de " << tipoAnimal[i] << endl;
        }
    }

    ///mostrar punto c

    for(int i=0;i<6;i++){
		for (int j=0; j<5;j++){
			cout << "Tipo de animal:         " << tipoAnimal[i] << endl;
			cout << "Tipo de vivienda:       " << tipoVivienda[j] << endl;
			cout << "Cantidad de Adopciones: " << tipoAnimalTipoVivienda [i][j] <<endl;
			cout << "----------------------------------------------" << endl;
		}
    }


    return 0;
}


