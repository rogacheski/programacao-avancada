#pragma once
class Hora
{
private:
	int _hora = 0;
	int _minuto = 0;
	int _segundo = 0;

public:
	Hora();
	Hora(int hora, int minuto, int segundo);
	void setHora(int hora);
	void setMinuto(int minuto);
	void setSegundo(int segundo);
	int const getHora();
	int const getMinuto();
	int const getSegundo();
	void somaHorario(Hora hora);
	void subtraiHorario(Hora hora);
	void mostrarHorario();
};

