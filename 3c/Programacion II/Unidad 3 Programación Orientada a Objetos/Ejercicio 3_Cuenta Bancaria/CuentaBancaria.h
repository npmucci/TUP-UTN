#pragma once
/*
3 Crea una clase llamada CuentaBancaria que represente una cuenta
bancaria. La clase debe tener los siguientes atributos:
● Número de cuenta (entero)
● Saldo actual (float)
Implementa los siguientes métodos:
● Un constructor que me permita establecer el número de cuenta y el
saldo.
● Un método depositar(float monto) que incremente el saldo.
● Un método retirar(float monto) que disminuya el saldo si
hay fondos suficientes, caso contrario no hace nada.
● Un método obtenerSaldo() que devuelva el saldo actual.
*/

class CuentaBancaria{
private:
    int _nroCuenta;
    float _saldo;

public:
    CuentaBancaria(int numeroCuenta, float saldoInicial);
    void depositar(float monto);
    bool retirar(float monto);
    float obtenerSaldo();

};
