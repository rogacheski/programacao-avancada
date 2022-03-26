#pragma once
#include <string>
#include "TipoCombustivel.h"
#include "Veiculo.h"

class Carro : public Veiculo
{
private:
	TipoCombustivel _combustivel;
	int _quilometragem;

public:
	Carro() : Veiculo(), _quilometragem = 0;
	void setCombustivel(TipoCombustivel& combustivel) { _combustivel = combustivel; };
	TipoCombustivel getCombustivel() const { return _combustivel; };
	int getQuilometragem() const { return _quilometragem; };
	void imprime() const;
	void incrementaQuilometragem() { _quilometragem++; };
	void aluga() { _disponivel = 0; };
	void devolve() { _disponivel = 1; };
};
