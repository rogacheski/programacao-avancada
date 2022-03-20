#pragma once
#include "Data.h"
#include "Carro.h"
#include "Cliente.h"

class AluguelCarro
{
private:
	Data _dataInicio;
	Data _dataEntrega;
	Carro _carro;
	Cliente _cliente;

public:
	AluguelCarro(Cliente& cliente, Carro& carro, Data& dataInicio) : _cliente(cliente), _carro(carro), _dataInicio(dataInicio) {};
	void realizarDevolucao(Data& dataEntrega) { _dataEntrega = dataEntrega };
	float calcularTotal const() { return (((_dataEntrega._ano - _dataInicio._ano) * 365) + ((_dataEntrega._mes - _dataInicio._mes) * 30) + (_dataEntrega._dia - _dataInicio._dia)) * _carro._valor };
};