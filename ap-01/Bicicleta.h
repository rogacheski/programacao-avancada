#pragma once
#include <string>

class Bicicleta
{
private:
	int _codigo = 0;
	std::string _placa = "";
	std::string _cor = "";
	int _valor = 0.0;
	bool _disponivel = 1;

public:
	Bicicleta();
	void setCodigo(int codigo) { _codigo = codigo; };
	void setPlaca(std::string placa) { _placa = placa; };
	void setCor(std::string) { _cor = cor; };
	void setValor(int valor) { _valor = valor; };
	int getCodigo() const { return _codigo; };
	std::string getPlaca() const { return _placa; };
	std::string getCor() const { return _cor; };
	int getValor() const { return _valor; };
	void imprime() const;
	void aluga() { _disponivel = 0; };
	void devolve() { _disponivel = 1; };
};