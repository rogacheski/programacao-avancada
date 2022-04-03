#pragma once
#include <vector>
#include "Cliente.h"

class Conta
{
private:
	std::string _numero;
	std::string _agencia;
	Cliente _cliente;
	double _saldo;
	std::vector<std::string> extrato;

public:
	void depositar(double valor);
	void retirar(double valor);
	void imprimeExtrato() const;
	void alterarCliente(Cliente cliente);
	void mostrarConta() const;
	virtual void aplicarJurosDiarios(int dias) = 0;
};