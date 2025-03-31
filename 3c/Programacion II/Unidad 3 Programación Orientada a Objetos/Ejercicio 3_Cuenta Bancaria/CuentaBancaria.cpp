#include <iostream>
#include "CuentaBancaria.h"
using namespace std;

CuentaBancaria::CuentaBancaria(int numeroCuenta, float saldoInicial)
{
    _nroCuenta=numeroCuenta;
    _saldo=saldoInicial;

}
void CuentaBancaria::depositar(float monto)
{
    _saldo+=monto;

}
bool CuentaBancaria::retirar(float monto)
{
    if(monto<=_saldo)
    {
        _saldo-=monto;
        return true;
    }
    else{
        return false;
    }
}
float CuentaBancaria:: obtenerSaldo()
{
return _saldo;
}
