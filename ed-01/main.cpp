#include "relogio.h"

Relogio createRelogio(int h, int m);

int main()
{
	Relogio r1, r2, r3;

	r1 = createRelogio(13, 45);
	r2 = createRelogio(16, 30);
	r3 = createRelogio(22, 40);

	r1.outputHorario();
	r2.outputHorario();
	r3.outputHorario();

	r1.setHora(9);
	r1.setMinuto(4);
	r2.setHora(9);
	r2.setMinuto(5);
	r3.setHora(15);
	r3.setMinuto(57);

	r1.outputHorario();
	r2.outputHorario();
	r3.outputHorario();

	r1.calcHorario();
	r2.calcHorario();
	r3.calcHorario();
}

Relogio createRelogio(int h, int m)
{
	Relogio r;
	r.setHora(h);
	r.setMinuto(m);
	return r;
};
