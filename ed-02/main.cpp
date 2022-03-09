#include "relogio.h"

int main()
{
	Relogio r1(13, 45), r2(16, 30), r3(22, 40), r4, r5(70, 142);

	r1.MostrarHorario();
	r2.MostrarHorario();
	r3.MostrarHorario();
	r4.MostrarHorario();
	r5.MostrarHorario();

	r1.setHora(9);
	r1.setMinuto(4);
	r2.setHora(27);
	r2.setMinuto(88);
	r3.setHora(15);
	r3.setMinuto(57);

	r1.MostrarHorario();
	r2.MostrarHorario();
	r3.MostrarHorario();

	r1.ConverterParaMinutos();
	r2.ConverterParaMinutos();
	r3.ConverterParaMinutos();
};
