#pragma once
#include <string>
#include "Data.h"

class Cliente
{
private:
	std::string _nome = "";
	std::string _email = "";
	Data _dataNascimento;
	int _idade = 0;

public:
	Cliente();
	Cliente(std::string nome, std::string email, Data dataNascimento, int idade);
	void setNome(std::string nome);
	void setEmail(std::string email);
	void setIdade(int idade);
	std::string const getNome();
	std::string const getEmail();
	int const getIdade();
	void const mostrarCliente();
};