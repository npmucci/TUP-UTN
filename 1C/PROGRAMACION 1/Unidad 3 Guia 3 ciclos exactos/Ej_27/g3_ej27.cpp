/*27 Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15
d�as. Por cada d�a registr�:
- N�mero de d�a (entero)
- Temperatura (float)
- Mil�metros de lluvia (float)
- Visibilidad en km (float)
Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se
pide calcular e informar:
A) El n�mero del d�a que se haya registrado la temperatura m�xima.
B) La amplitud t�rmica de todo el per�odo.
C) La cantidad de d�as con neblina.
D) Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia.
E) Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as.
De lo contrario mostrar "Quincena seca".
NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
temperatura m�nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.*/

#include <iostream>
using namespace std;


int main(){
	int dia, diasNeblina=0, diasLluvia=0, diasSinLluvia=0;
	float temperatura, lluviaMl, visibilidadKM, temperaturaMax, temperaturaMin, amplitudTermica;

	for(int i=1;i<=15;i++){

		cout <<"		Dia " << i << endl;
		cout << "Ingrese la temperatura       : ";
		cin >> temperatura;
		cout << "Ingrese los ml de lluvia     : ";
		cin >> lluviaMl;
		cout << "Ingrese los km de visibilidad: ";
		cin >> visibilidadKM;
		cout << "----------------------------------" << endl;

	//Punto A d�a de temperatura m�xima
		if(i==1 || temperatura>temperaturaMax ){
			temperaturaMax= temperatura;
			dia = i;

			}
	//Punto B amplitud termica
		if(i==1 || temperatura<temperaturaMin ){
			temperaturaMin= temperatura;

			}
	//Punto C cantidad de d�as con neblina
		if(visibilidadKM < 2 ){
			diasNeblina++;

			}
	//Punto D y E cantidad de d�as con lluvia
		if(lluviaMl > 0 ){
			diasLluvia++;

		}else{
			diasSinLluvia++;
			}
		}


	//Punto A d�a de temperatura m�xima
		cout <<" La temperatura m�xima fue de: " << temperaturaMax <<" C� y se registr� el d�a " << dia << endl;

	//Punto B amplitud termica
		amplitudTermica = temperaturaMax - temperaturaMin;
		cout << " La amplitud t�rmica de todo el per�odo fue: " << amplitudTermica << endl;

	//Punto C d�as con neblina

		cout << "Se registraron " << diasNeblina << " d�as con neblina. " << endl;

	//Punto D quincena LLuviosa
		if (diasLluvia > diasSinLluvia){
			cout<< "La quincena fue lluviosa" << endl;
		}

	//Punto E quincena seca/humeda
		if(diasLluvia >=5){
			cout<< "La quincena fue h�meda" << endl;

		}else{
			cout<<"La quincena fue seca" << endl;
		}

return 0;
}
