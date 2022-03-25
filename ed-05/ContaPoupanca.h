#pragma once
#include "Conta.h"
#include "Investimento.h"

class ContaPoupanca : public Conta, protected Investimento
{
private:
	std::string _numero = "";
	std::string _agencia = "";
	Cliente _cliente;
	float _saldo = 0.0;
	std::vector<std::string> extrato;

public:
	ContaPoupanca() : Conta(), Investimento(0.08);
	void aplicarJurosDiarios(dias, taxa);
};
