#pragma once
class Data
{
private:
	int _dia = 1;
	int _mes = 1;
	int _ano = 1;

public:
	Data();
	Data(int dia, int mes, int ano);
	void setDia(int dia);
	void setMes(int mes);
	void setAno(int ano);
	int const getDia();
	int const getMes();
	int const getAno();
};