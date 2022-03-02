#ifndef RELOGIO_H
#define RELOGIO_H
#include <iostream>
#include <iomanip>
using namespace std;

class Relogio
{
private:
	int hora;
	int min;

public:
	void setHora(int h);
	void setMinuto(int m);
	void outputHorario();
	void calcHorario();
};

#endif