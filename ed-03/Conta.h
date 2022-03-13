#pragma once
#include <vector>
#include "Cliente.h"

class Conta
{
private:
	std::string _numero = "";
	std::string _agencia = "";
	Cliente _cliente;
	float _saldo = 0.0;
	std::vector<std::string> extrato;

public:
	Conta();
	Conta(std::string numero, std::string agencia, Cliente cliente);
	void depositar(float valor);
	void retirar(float valor);
	void const imprimeExtrato();
	void alterarCliente(Cliente cliente);
};