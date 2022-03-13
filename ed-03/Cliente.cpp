#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente()
{

};

Cliente::Cliente(string nome, string email, Data dataNascimento, int idade)
{
	_nome = nome;
	_email = email;
	_dataNascimento = dataNascimento;
	_idade = idade;
};

void Cliente::setNome(string nome)
{
	_nome = nome;
};

void Cliente::setEmail(string email)
{
	_email = email;
};

void Cliente::setIdade(int idade)
{
	if (idade >= 0)
	{
		_idade = idade;
	}
};

const string Cliente::getNome()
{
	return _nome;
};

const string Cliente::getEmail()
{
	return _email;
};

int const Cliente::getIdade()
{
	return _idade;
};

void const Cliente::mostrarCliente()
{
	cout << "Cliente: " << _nome << endl;
	cout << "Email: " << _email << endl;
	cout << "Data de nascimento: " << _dataNascimento.getDia() << "/" << _dataNascimento.getMes() << "/" << _dataNascimento.getAno() << endl;
	cout << "Idade: " << _idade << endl;
};