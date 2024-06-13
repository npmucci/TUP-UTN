#pragma one
const int CARTAS_POR_MANO=5, TAM_BARAJA_FRANCESA=20;
const int  TAM_VALOR = 5, TAM_PALO =4;
const string VALORES[TAM_VALOR]= {"10","J","Q","K","A"};
const string PALOS [TAM_PALO]= {"Corazón", "Diamantes", "Picas", "Trébol"};

struct Carta
{
  string _palo;
  string _valor;
};

struct Figura
{
  string _palo[TAM_PALO]; /// EMBAUCADORA

};

struct Jugador
{
  string _nombre;
  Carta _mano[CARTAS_POR_MANO];
  int _turno; /// para ver si es el jugador 1 o 2
  int puntaje;

};
