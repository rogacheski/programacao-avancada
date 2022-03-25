#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrente.h"
#include "ContaSalario.h"
#include "Investimento.h"

int main()
{
	ContaPoupanca cp();
	ContaCorrente cc();

	cp.depositar(1000.0);
	cc.depositar(1000.0);

	cp.mostrarConta();
	cc.mostrarConta();

	cp.aplicarJurosDiarios(20, cp._taxaJuros);
	cc.aplicarJurosDiarios(20, cc._taxaJuros);

	cp.mostrarConta();
	cc.mostrarConta();
};
