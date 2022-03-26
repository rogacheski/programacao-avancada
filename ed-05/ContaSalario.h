#pragma once
#include "Conta.h"

class ContaSalario : public Conta
{
private:
	std::string _numero;
	std::string _agencia;
	Cliente _cliente;
	float _saldo;
	std::vector<std::string> _extrato;

public:
	ContaSalario() : _numero(""), _agencia(""), _cliente(Cliente();), _saldo(1500.0);
	void depositar(float valor) {};
};
