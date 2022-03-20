#pragma once
#include <iostream>
#include <iomanip>

class Data
{
private:
	int _dia;
	int _mes;
	int _ano;

public:
	Data(int dia, int mes, int ano) : _dia(dia), _mes(mes), _ano(ano) {};
	void setDia(int dia) { _dia = dia; };
	void setMes(int mes) { _mes = mes; };
	void setAno(int ano) { _ano = ano; };
	int getDia() { return _dia; };
	int getMes() { return _mes; };
	int getAno() { return _ano; };
	int subtrair(Data outraData) { return ((_ano - outraData._ano) * 365) + ((_mes - outraData._mes) * 30) + (_dia - outraData._dia); };
	void imprime() { std::cout << std::setfill('0') << std::setw(2) << _dia << "/" << std::setw(2) << "/" << std::setw(4) << _ano << std::endl; };
};