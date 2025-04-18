#include <iostream>
using namespace std;

/*
Ejercicio con Vectores, Matrices y Memoria Dinámica
Una universidad desea registrar las notas de los exámenes finales de las 10 materias de una carrera.
Para cada materia, se debe cargar la cantidad de alumnos inscriptos, y por cada alumno se debe registrar
la siguiente información:
●	Legajo: Un número entero mayor a 0, que identifica al alumno de manera única.
●	Llamado: Un número entero entre 1 y 3 que indica el llamado en el que el alumno rindió el examen final
(1 - Primer llamado, 2 - Segundo llamado, 3 - Tercer llamado).
●	Modalidad: Un número entero entre 1 y 4 que indica la modalidad del examen
(1 - Presencial, 2 - Distancia, 3 - Híbrido, 4 - Libre).
●	Nota: Un número entero entre 0 y 10 que representa la nota obtenida en el examen (0 indica que el alumno estuvo ausente).
La información se encuentra agrupada por materia. Se pide calcular e informar lo siguiente:
1.	Materia con más inscripciones: Determinar cuál de las 10 materias tiene la mayor cantidad de inscripciones.
2.	Modalidad con más inscripciones: Determinar cuál de las modalidades tiene la mayor cantidad de inscripciones
entre todas las materias.
3.	Estadísticas por llamado: Para cada llamado, la modalidad de examen que más inscripciones haya registrado.
4.	Estadísticas sobre las materias: Por cada materia, la cantidad de alumnos que se hayan inscripto más de una vez.

*/

int maximoVector(int vec[], int cantidad);


int main() {
	int codigoMateria, cantidadInscripciones;
   int legajo, llamado, modalidad, nota;

   /// punto 1
   int pa_codigoMateria, pa_cantidadMaxima = 0;

   /// punto 2
   int pb_modalidades[4]{}, pb_modalidadMaxima;
   string pb_modalidadesNombre[4]{"Presencial", "Distancia", "Hibrido", "Libre"};

   /// punto 3
   int pc_llamadoModalidad[3][4]{};

   /// punto 4
   int pd_cantidadDuplicados[10][2]{};

   for(int i=0; i<2; i++){
      cout << "Ingrese codigo de materia: ";
      cin >> codigoMateria;

      cout << "Ingrese cantidad de inscripciones: ";
      cin >> cantidadInscripciones;

      if(cantidadInscripciones > pa_cantidadMaxima){
         pa_cantidadMaxima = cantidadInscripciones;
         pa_codigoMateria = codigoMateria;
      }

      pd_cantidadDuplicados[i][0] = codigoMateria;

      //int *pd_legajos = new int[cantidadInscripciones]();

      int *pd_legajos = new int[cantidadInscripciones];

      if(pd_legajos == nullptr){
         cout << "No se pudo asignar la memoria" << endl;
         // exit(-1);
         return -1;
      }

      for(int j=0; j<cantidadInscripciones; j++){
         cout << "Legajo: ";
         cin >> legajo;
         cout << "Llamado: ";
         cin >> llamado;
         cout << "Modalidad: ";
         cin >> modalidad;
         cout << "Nota: ";
         cin >> nota;

         pb_modalidades[modalidad-1]++;

         pc_llamadoModalidad[llamado-1][modalidad-1]++;

         pd_legajos[j] = legajo;
      }

      /// pd_legajos tengo todos los legajos ya cargados

      for(int k=0; k<cantidadInscripciones; k++){
         if(pd_legajos[k] == 0){
            continue; /// termina la iteracion y continua con la siguinete
         }

         bool encontre = false;
         for(int l=k+1; l<cantidadInscripciones; l++){
            if(pd_legajos[k] == pd_legajos[l]){
               pd_legajos[l] = 0;
               encontre = true;
            }
         }

         if(encontre == true){
            pd_cantidadDuplicados[i][1]++;
         }
      }

      delete [] pd_legajos;

   }


   cout << "PA: " << pa_codigoMateria << endl;


   pb_modalidadMaxima = maximoVector(pb_modalidades, 4);

   cout << "PB: " << pb_modalidadesNombre[pb_modalidadMaxima]<< endl;

   cout << "Punto C:" << endl;
   /***
   /// Llamada a una funcion pasando una fila para ser tratada como un vector
   for(int i=0; i < 3; i++){
      cout << "Llamado "<< i+1 <<": " << pb_modalidadesNombre[maximoVector(pc_llamadoModalidad[i], 4)] << endl;
   }
   */

   for(int i=0; i < 3; i++){
      int maximo = 0;
      for(int j=1; j<4; j++){
         if(pc_llamadoModalidad[i][j] > pc_llamadoModalidad[i][maximo]){
            maximo = j;
         }
      }

      cout << "Llamado "<< i+1 <<": " << pb_modalidadesNombre[maximo] << endl;
   }

   cout << "Punto D:" << endl;
   for(int i=0; i<10; i++){
      cout << pd_cantidadDuplicados[i][0] << ": " << pd_cantidadDuplicados[i][1] << endl;
   }


	return 0;
}


int maximoVector(int vec[], int cantidad){
   int maximo = 0;

   for(int i=1; i<cantidad; i++){
      if(vec[i] > vec[maximo]){
         maximo = i;
      }
   }

   return maximo;
}
