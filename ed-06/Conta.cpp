#include "Conta.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Conta::depositar(double valor)
{
	_saldo += valor;

	extrato.push_back(("+ " + to_string(valor) + " ---> Saldo: " + to_string(_saldo)));
};

void Conta::retirar(double valor)
{
	if (_saldo >= valor)
	{
		_saldo -= valor;

		extrato.push_back(("- " + to_string(valor) + " ---> Saldo: " + to_string(_saldo)));
	}
};

void Conta::imprimeExtrato() const
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

void Conta::mostrarConta() const
{
	cout << "Numero: " << _numero << endl;
	cout << "Agencia: " << _agencia << endl;
	_cliente.mostrarCliente();
	cout << "Saldo: " << _saldo << endl;
};