#pragma once
#include "Conta.h"
#include "Investimento.h"

class ContaPoupanca : public Conta, public Investimento
{
private:
	std::string _numero;
	std::string _agencia;
	Cliente _cliente;
	double _saldo;
	std::vector<std::string> extrato;

public:
	ContaPoupanca() : Investimento(0.08), _numero(""), _agencia(""), _cliente(Cliente()), _saldo(0.0) {};
	ContaPoupanca(double saldo) : Investimento(0.08), _numero(""), _agencia(""), _cliente(Cliente()), _saldo(saldo) {};
	void aplicarJurosDiarios(int dias);
};