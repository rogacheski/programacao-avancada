#include "ContaCorrente.h"
using namespace std;

void ContaCorrente::aplicarJurosDiarios(int dias)
{
	if (dias == 0)
		cout << "Juros aplicados" << endl;

	else
	{
		retirar(_saldo * getTaxa());
		dias--;
		aplicarJurosDiarios(dias);
	}
};