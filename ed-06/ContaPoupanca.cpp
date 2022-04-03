#include "ContaPoupanca.h"
using namespace std;

void ContaPoupanca::aplicarJurosDiarios(int dias)
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