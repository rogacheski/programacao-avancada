#include "Banco.h"
#include "Cliente.h"
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "ContaSalario.h"
#include "Data.h"
#include "Investimento.h"
using namespace std;

int main()
{
	ContaPoupanca cp1, cp2;
	ContaCorrente cc1, cc2;
	ContaSalario cs1(500.0);

	cp1.depositar(100.0);
	cp2.depositar(2000.0);
	cc1.depositar(100.0);
	cc2.depositar(1000.0);

	cp1.mostrarConta();
	cout << endl;
	cc1.mostrarConta();
	cout << endl;

	Banco banco;

	banco.adicionaPoupanca(cp1);
	banco.adicionaPoupanca(cp2);
	banco.adicionaCorrente(cc1);
	banco.adicionaCorrente(cc2);

	banco.aplicaJurosPoupanca(40);
	banco.aplicaJurosCorrente(40);
	banco.imprimeExtratosPoupanca();
	banco.imprimeExtratosCorrente();

	return 0;
};
