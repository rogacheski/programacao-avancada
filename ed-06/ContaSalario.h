#pragma once
#include "Conta.h"

class ContaSalario : public Conta
{
private:
	std::string _numero;
	std::string _agencia;
	Cliente _cliente;
	double _saldo;
	std::vector<std::string> _extrato;

public:
	ContaSalario(double saldo) : _numero(""), _agencia(""), _cliente(Cliente()), _saldo(saldo) {};
	void depositar(double valor) {};
	void retirar(double valor) {};
	void aplicarJurosDiarios(int dias) {};
};