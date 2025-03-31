#include <iostream>
/*
LAS AUTORIDADES DE LA CARRERA TUP DE LA UTN ESTÁN REALIZANDO UN ANÁLISIS DE LOS CURSOS VIRTUALES DE LAS DISTINTAS MATERIAS.
POR CADA UNA DE LAS 20 MATERIAS DE LA CARRERA TIENE LA SIGUIENTE INFORMACIÓN
NÚMERO DE MATERIA (ENTRE 1 Y 20), NOMBRE, CANTIDAD DE ALUMNOS INSCRIPTOS, CANTIDAD DE PROFESORES
ADEMÁS POR CADA INGRESO DE LOS ESTUDIANTES AL AULA VIRTUAL SE REGISTRA LO SIGUIENTE:
LEGAJO, FECHA DE ACCESO (DÍA Y MES), NÚMERO DE LA MATERIA A LA QUE INGRESO, CANTIDAD DE HORAS (NÚMERO REAL)
EL FIN DE LOS DATOS SE INDICA CON UN NÚMERO DE LEGAJO IGUAL A 0.
SE QUIERE RESPONDER LAS SIGUIENTES PREGUNTAS:
a) LAS MATERIAS QUE NO TUVIERON ACCESO DE ALUMNOS NUNCA
b) LA MATERIA QUE MÁS CANTIDAD DE HORAS REGISTRO DE ACCESO DE ALUMNOS
c) POR CADA MATERIA Y DÍA DE MARZO, LA CANTIDAD DE ACCESOS DE ALUMNOS A LAS AULAS VIRTUALES.
HACER UN PROGRAMA EN EL MARCO DE UN PROYECTO DE CODEBLOCK CON UN MENÚ CON OPCIONES PARA CARGAR LOS DATOS, MOSTRAR CADA PUNTO Y SALIR DEL PROGRAMA.
*/
using namespace std;

void cargarDatos( int accesosMarzo[][31], float horasMateria[]);
void mostrarMenu (int accesoMarzo[][31], float horasMateria[]);
void ejecutarOpcion (int accesoMarzo[][31], float horasMateria[], int op);
void materiasSinAcceso( float horasMateria[]);
void materiaMasAcceso (float horasMateria[]);
void estadisticasMarzo( int accesosMarzo[][31]);

int main()
{
    float acumHorasMateria[20] {};
    int acumAccesosMarzo[20] [31] {};
    mostrarMenu(acumAccesosMarzo,acumHorasMateria);

    return 0;
}

void mostrarMenu(int accesoMarzo[][31], float horasMaterias[])
{
    int opcion;
    do
    {
        system("cls");
        cout << "MENU PRINCIPAL" << endl;
        cout << "------------------------" << endl;
        cout << "1. INGRESO DATOS ALUMNOS" << endl;
        cout << "2. MATERIAS SIN ACCESO" << endl;
        cout << "3. MATERIA CON MAS ACCESOS" << endl;
        cout << "4. ESTADISTICAS MARZO" << endl;
        cout << "5. INGRESO MATERIAS" << endl;
        cout << "6. MOSTRAR MATERIAS" << endl;
        cout << "0. FIN DEL PROGRAMA" << endl;
        cout << "------------------------" << endl;
        cout << "OPCION: ";
        cin >> opcion;
        ejecutarOpcion(accesoMarzo,horasMaterias,opcion);

    }
    while(opcion!=0);


}

void ejecutarOpcion (int accesoMarzo[][31], float horasMateria[], int op)
{
    switch(op)
    {
    case 1:
        cargarDatos(accesoMarzo,horasMateria);
        break;
    case 2:
        materiasSinAcceso(horasMateria);
        break;
    case 3:
        materiaMasAcceso(horasMateria);
        break;
    case 4:
        estadisticasMarzo(accesoMarzo);
        break;
    case 5:

        break;
    case 6:

        break;
    case 0:
        cout << "Saliendo del Programa....";

        break;

    }




}

void cargarDatos ( int accesosMarzo[][31], float horasMateria[])
{
    int legajo, mes,dia, materia;
    float horas;
    cout << "Ingrese el número de de legajo ";


    cin >> legajo;
    while (legajo !=0)
    {
        cout << "Ingrese el mes(numero entre 1 y 12) ";
        cin >> mes;
        cout  << "Ingese el dia (numero entre 1 y 31) ";
        cin >> dia;
        cout << "Ingrese el numero de materia (numero entre 1 y 20) ";
        cin >> materia;
        cout << "Ingrese la cantidad de horas ";
        cin >> horas;

        horasMateria[materia-1]+=horas;

        if(mes==3)
        {
            accesosMarzo[materia-1][dia-1]++;
        }
        cout << "Ingrese el número de de legajo ";
        cin >> legajo;

    }

}

void materiasSinAcceso( float horasMateria[])
{
    cout << "Materias sin acceso de Alumnos" << endl;

    for(int i=0; i<20; i++)
    {
        if(horasMateria[i]==0)
        {
            cout << i+1 << endl;
        }
    }
system("pause");
}

void materiaMasAcceso (float horasMateria[])
{
    float horasMayor=0;
    int materiaMayor;
    for(int i=0; i<20; i++)
    {
        if(horasMateria[i]>horasMayor)
        {
            horasMayor=horasMateria[i];
            materiaMayor=i+1;
        }
    }
    cout << "La materia con mayor cantidad de horas de acceso fue la materia Numero :"  << materiaMayor << endl;
    system("pause");
}

void estadisticasMarzo(int accesosMarzo[][31])
{
    cout << "\t"; // Espacio para la cabecera de columnas

    // Imprimir la cabecera con los números de los días (1 a 31)
    for (int j = 0; j < 31; j++)
    {
        cout << j + 1 << "\t"; // Imprimir el número del día
    }
    cout << endl;

    // Imprimir cada fila de la matriz
    for (int i = 0; i < 20; i++)
    {
        cout << "M" << i + 1 << "\t"; // Imprimir el número de materia

        for (int j = 0; j < 31; j++)
        {
            cout << accesosMarzo[i][j] << "\t"; // Imprimir la cantidad de accesos
        }
        cout << endl;
    }
    system("pause");
}


