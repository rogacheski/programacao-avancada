#pragma once
#include "Data.h"
#include "Bicicleta.h"
#include "Cliente.h"

class AluguelBicicleta
{
private:
	Data _dataInicio;
	Data _dataEntrega;
	Bicicleta _bicicleta;
	Cliente _cliente;

public:
	AluguelBicicleta(Cliente& cliente, Bicicleta& bicicleta, Data& dataInicio) : _dataInicio(dataInicio), _bicicleta(bicicleta), _cliente(cliente) {};
	void realizarDevolucao(Data& dataEntrega) { _dataEntrega = dataEntrega; };
	int calcularTotal() const { return (((_dataEntrega.getAno() - _dataInicio.getAno()) * 365) + ((_dataEntrega._mes - _dataInicio._mes) * 30) + (_dataEntrega._dia - _dataInicio._dia)) * _bicicleta._valor };
};