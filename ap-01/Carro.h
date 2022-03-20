#pragma once
#include <string>
#include "TipoCombustivel.h"



class Carro
{
private:
	int _codigo = 0;
	std::string _placa = "";
	std::string _cor = "";
	TipoCombustivel _combustivel;
	int _quilometragem = 0;
	float _valor = 0.0;
	bool _disponivel = 1;

public:
	Carro();
	void setCodigo(int codigo) { _codigo = codigo; };
	void setPlaca(std::string placa) { _placa = placa; };
	void setCor(std::string cor) { _cor = cor; };
	void setCombustivel(TipoCombustivel& combustivel) { _combustivel = combustivel; };
	void setValor(float valor) { _valor = valor; };
	int getCodigo() const { return _codigo; };
	std::string getPlaca() const { return _placa; };
	std::string getCor() const { return _cor; };
	TipoCombustivel getCombustivel() const { return _combustivel; };
	int getQuilometragem() const { return _quilometragem; };
	float getValor() const { return _valor; };
	void imprime() const;
	void incrementaQuilometragem() { _quilometragem++; };
	void aluga() { _disponivel = 0; };
	void devolve() { _disponivel = 1; };
};