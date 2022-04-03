#pragma once
#include "Conta.h"
#include "Investimento.h"

class ContaCorrente : public Conta, public Investimento
{
private:
	std::string _numero;
	std::string _agencia;
	Cliente _cliente;
	double _saldo;
	std::vector<std::string> extrato;

public:
	ContaCorrente() : Investimento(0.03), _numero(""), _agencia(""), _cliente(Cliente()), _saldo(0.0) {};
	ContaCorrente(double saldo) : Investimento(0.03), _numero(""), _agencia(""), _cliente(Cliente()), _saldo(saldo) {};
	void aplicarJurosDiarios(int dias);
};