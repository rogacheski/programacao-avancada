#include "Hora.h"
#include <iomanip>
#include <iostream>
using namespace std;

void calculaHorario(int tempo, int caso)
{
	int horaFinal = tempo / 3600;
	int minutoFinal = (tempo % 3600) / 60;
	int segundoFinal = (tempo % 3600) % 60;

	if (caso == 1)
	{
		cout << setfill('0') << setw(2) << horaFinal << ":" << setw(2) << minutoFinal << ":" << setw(2) << segundoFinal << " do dia seguinte" << endl;
	}

	else if (caso == -1)
	{
		cout << setw(2) << horaFinal << ":" << setw(2) << minutoFinal << ":" << setw(2) << segundoFinal << " do dia anterior" << endl;
	}

	else
	{
		cout << setw(2) << horaFinal << ":" << setw(2) << minutoFinal << ":" << setw(2) << segundoFinal << " do mesmo dia" << endl;
	}
};

Hora::Hora()
{

};

Hora::Hora(int hora, int minuto, int segundo)
{
	if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundo >= 0 && segundo <= 59)
	{
		_hora = hora;
		_minuto = minuto;
		_segundo = segundo;
	}
};

void Hora::setHora(int hora)
{
	if (hora >= 0 && hora <= 23)
	{
		_hora = hora;
	}
};

void Hora::setMinuto(int minuto)
{
	if (minuto >= 0 && minuto <= 59)
	{
		_minuto = minuto;
	}
};

void Hora::setSegundo(int segundo)
{
	if (segundo >= 0 && segundo <= 59)
	{
		_segundo = segundo;
	}
};

int const Hora::getHora()
{
	return _hora;
};

int const Hora::getMinuto()
{
	return _minuto;
};

int const Hora::getSegundo()
{
	return _segundo;
};

void Hora::somaHorario(Hora horario)
{
	int somaHora = (_hora + horario._hora);
	int somaMinuto = (_minuto + horario._minuto);
	int somaSegundo = (_segundo + horario._segundo);
	int somaTotal = (somaHora * 3600) + (somaMinuto * 60) + somaSegundo;

	if (somaTotal >= 86400) //24hrs ou mais
	{
		somaTotal -= 86400;

		calculaHorario(somaTotal, 1);
	}

	else
	{
		calculaHorario(somaTotal, 0);
	}
}

void Hora::subtraiHorario(Hora horario)
{
	int somaPrimeiro = (_hora * 3600) + (_minuto * 60) + _segundo;
	int somaSegundo = (horario._hora * 3600) + (horario._minuto * 60) + horario._segundo;
	int subtracao = somaPrimeiro - somaSegundo;

	if (subtracao < 0) //menos que 0hrs
	{
		subtracao *= -1;

		calculaHorario(subtracao, -1);
	}

	else
	{
		calculaHorario(subtracao, 0);
	}
}

void Hora::mostrarHorario()
{
	cout << setfill('0') << setw(2) << _hora << ":" << setw(2) << _minuto << ":" << setw(2) << _segundo << endl;
};