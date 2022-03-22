#pragma once
#include <string>
#include "TipoCombustivel.h"
#include "Veiculo.h"

class Carro : public Veiculo
{
private:
	TipoCombustivel _combustivel;
	int _quilometragem = 0;

public:
	Carro();
	void setCombustivel(TipoCombustivel& combustivel) { _combustivel = combustivel; };
	TipoCombustivel getCombustivel() const { return _combustivel; };
	int getQuilometragem() const { return _quilometragem; };
	void imprime() const;
	void incrementaQuilometragem() { _quilometragem++; };
};
