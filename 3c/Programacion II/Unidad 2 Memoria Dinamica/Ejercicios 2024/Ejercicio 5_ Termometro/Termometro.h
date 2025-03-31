#pragma Once
/*
5 Crea una clase llamada Termometro que represente un termómetrodigital. La clase debe contener los siguientes atributos:
● temperatura (float): Almacena la temperatura actual medida porel termómetro.
● unidad (char): Almacena la unidad de medida de la temperatura('C' para Celsius, 'F' para Fahrenheit).
Implementa los siguientes métodos:
● Termometro(float tempInicial, char unidadInicial):
Constructor que inicializa la temperatura y la unidad de medida.
● get y set de temperatura.
● cambiarUnidad(char nuevaUnidad): Cambia la unidad demedida entre Celsius y Fahrenheit. Si la nueva unidad es diferente
de la actual, convierte la temperatura a la nueva unidad.
○ Fórmula de conversión de Celsius a Fahrenheit: (C * 9/5)+ 32
○ Fórmula de conversión de Fahrenheit a Celsius: (F - 32)* 5/9
● getUnidad(): Devuelve la unidad actual de medida.

*/

class Termometro{
private:
    float _temperatura;
    char _unidad;

public:
    Termometro(float temperatura, char unidad);
    float getTemperatura();
    void setTemperatura(float temperatura);
    void cambiarUnidad(char nuevaUnidad);
    void setUnidad(char unidad);
    char getUnidad();
};
