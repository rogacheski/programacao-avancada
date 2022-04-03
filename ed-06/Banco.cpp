#include "Banco.h"

void Banco::imprimirContasPoupanca() const
{
    for (int i = 0; i < _registroPoupanca.size(); i++)
    {
        _registroPoupanca[i].mostrarConta();
    }
};

void Banco::imprimirContasCorrente() const
{
    for (int i = 0; i < _registroCorrente.size(); i++)
    {
        _registroCorrente[i].mostrarConta();
    }
};

void Banco::aplicaJurosPoupanca(int dias)
{
    for (int i = 0; i < _registroPoupanca.size(); i++)
    {
        _registroPoupanca[i].aplicarJurosDiarios(dias);
    }
};

void Banco::aplicaJurosCorrente(int dias)
{
    for (int i = 0; i < _registroCorrente.size(); i++)
    {
        _registroCorrente[i].aplicarJurosDiarios(dias);
    }
};

void Banco::imprimeExtratosPoupanca() const
{
    for (int i = 0; i < _registroPoupanca.size(); i++)
    {
        _registroPoupanca[i].imprimeExtrato();
    }
};

void Banco::imprimeExtratosCorrente() const
{
    for (int i = 0; i < _registroCorrente.size(); i++)
    {
        _registroCorrente[i].imprimeExtrato();
    }
};