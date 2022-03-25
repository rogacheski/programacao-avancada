#pragma once
#include <iostream>

class Investimento
{
private:
	float _taxaJuros = 0.0;

public:
	Investimento(float taxaJuros) { if (taxaJuros >= 0 && taxaJuros <= 1) _taxaJuros = taxaJuros; };
	void setTaxa(float taxaJuros) { if (taxaJuros >= 0 && taxaJuros <= 1) _taxaJuros = taxaJuros; };
	float getTaxa() { return _taxaJuros; };
	void imprimir() { std::cout << "Taxa de juros: " << _taxaJuros << std::endl; };
};
