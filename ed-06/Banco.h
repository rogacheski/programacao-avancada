#pragma once
#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrente.h"
#include "ContaSalario.h"

class Banco
{
private:
	std::vector<ContaPoupanca> _registroPoupanca;
	std::vector<ContaCorrente> _registroCorrente;

public:
	Banco() {};
	void adicionaPoupanca(ContaPoupanca c) { _registroPoupanca.push_back(c); };
	void adicionaCorrente(ContaCorrente c) { _registroCorrente.push_back(c); };
	void imprimirContasPoupanca() const;
	void imprimirContasCorrente() const;
	void aplicaJurosPoupanca(int dias);
	void aplicaJurosCorrente(int dias);
	void imprimeExtratosPoupanca() const;
	void imprimeExtratosCorrente() const;
};