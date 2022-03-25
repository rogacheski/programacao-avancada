#pragma once
#include "Conta.h"

class ContaSalario : public Conta
{
private:
	std::string _numero = "";
	std::string _agencia = "";
	Cliente _cliente;
	float _saldo = 1500.0;
	std::vector<std::string> extrato;

public:
	ContaSalario()
	void depositar(float valor) {};
};
