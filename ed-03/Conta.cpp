#include "Conta.h"
#include <iostream>
#include <iomanip>
using namespace std;

Conta::Conta()
{

};

Conta::Conta(string numero, string agencia, Cliente cliente)
{
	_numero = numero;
	_agencia = agencia;
	_cliente = cliente;
};

void Conta::depositar(float valor)
{
	_saldo += valor;

	extrato.push_back(("+ " + to_string(valor) + " ---> Saldo: " + to_string(_saldo)));
};

void Conta::retirar(float valor)
{
	if (_saldo >= valor)
	{
		_saldo -= valor;

		extrato.push_back(("- " + to_string(valor) + " ---> Saldo: " + to_string(_saldo)));
	}
};

void const Conta::imprimeExtrato()
{
	cout << "\nExtrato:" << endl;

	for (int i = 0; i < extrato.size(); i++)
	{
		cout << extrato[i] << endl;
	};
}

void Conta::alterarCliente(Cliente cliente)
{
	_cliente = cliente;
};