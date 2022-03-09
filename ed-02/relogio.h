#ifndef RELOGIO_H
#define RELOGIO_H
#include <iostream>
#include <iomanip>
#define HORA_MAX 23
#define MINUTO_MAX 59

class Relogio
{
private:
	int _hora = 0;
	int _min = 0;

public:
	Relogio() { _hora = 0; _min = 0; };
	Relogio(int h, int m) { if (ValidarHorario(h, m) == 1) { _hora = h; _min = m; } };
	void setHora(int h) { if(h <= HORA_MAX) _hora = h; };
	void setMinuto(int m) { if(m <= MINUTO_MAX) _min = m; };
	const void MostrarHorario() { std::cout << std::setfill('0') << std::setw(2) << _hora << ":" << std::setw(2) << _min << std::endl; };
	const void ConverterParaMinutos() { std::cout << (_hora * 60) + _min << std::endl; };
	const bool ValidarHorario(int h, int m) { if (h <= HORA_MAX && h >= 0 && m < MINUTO_MAX && m >= 0) return 1; else return 0; };
};

#endif