#include "relogio.h"

void Relogio::setHora(int h)
{
	hora = h;
};

void Relogio::setMinuto(int m)
{
	min = m;
};

void Relogio::outputHorario()
{
	cout << setfill('0');
	cout << setw(2) << hora << ":" << setw(2) << min << endl;
};

void Relogio::calcHorario()
{
	int resultado = (hora * 60) + min;
	cout << resultado << endl;
};