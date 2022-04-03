#pragma once
#include <iostream>

class Investimento
{
private:
	double _taxaJuros = 0.01;

public:
	Investimento(double taxaJuros) { if (taxaJuros >= 0.000 && taxaJuros <= 1.0) _taxaJuros = taxaJuros; };
	void setTaxa(double taxaJuros) { if (taxaJuros >= 0.000 && taxaJuros <= 1.0) _taxaJuros = taxaJuros; };
	double getTaxa() { return _taxaJuros; };
	void imprimir() { std::cout << "Taxa de juros: " << _taxaJuros << std::endl; };
};