#include "Data.h"

Data::Data()
{

};

Data::Data(int dia, int mes, int ano)
{
	if (dia > 0 && dia <= 30 && mes > 0 && mes <= 12 && ano > 0)
	{
		_dia = dia;
		_mes = mes;
		_ano = ano;
	}
};

void Data::setDia(int dia)
{
	if (dia > 0 && dia <= 30)
	{
		_dia = dia;
	}
};

void Data::setMes(int mes)
{
	if (mes > 0 && mes <= 12)
	{
		_mes = mes;
	}
};

void Data::setAno(int ano)
{
	if (ano > 0)
	{
		_ano = ano;
	}
};

int Data::getDia() const
{
	return _dia;
};

int Data::getMes() const
{
	return _mes;
};

int Data::getAno() const
{
	return _ano;
};