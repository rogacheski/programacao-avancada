#pragma once
#include "Data.h"
#include <string>

class Cliente
{
private:
	int _codigo = 0;
	std::string _nome = "";
	Data _aniversario;

public:
	Cliente();
	Cliente(int codigo, std::string nome, Data& aniversario) : _codigo(codigo), _nome(nome), _aniversario(aniversario) {};
	void imprime() const;
};