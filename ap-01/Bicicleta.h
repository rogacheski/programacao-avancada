#pragma once
#include <string>
#include "Veiculo.h"

class Bicicleta : public Veiculo
{
public:
	Bicicleta() : Veiculo();
	void imprime() const;
	void aluga() { _disponivel = 0; };
	void devolve() { _disponivel = 0; };
};
