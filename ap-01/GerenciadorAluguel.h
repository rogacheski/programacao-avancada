#pragma once

class GerenciadorAluguel
{
private:
	AluguelCarro _aluguelCarro;
	AluguelBicicleta _aluguelBicicleta;

public:
	void imprimirCarro() const;
	void imprimirBicicleta() const;
};