#include "Data.h"
#include "Cliente.h"
#include "Conta.h"
#include "Hora.h"
#include <iostream>
using namespace std;

int main()
{
	//testando a classe Data:
	Data data1(21, 4, 2002);
	Data data2(21, 4, 2002);

	data1.setDia(25);
	data1.setMes(10);
	data1.setAno(2000);

	cout << data1.getDia() << endl;
	cout << data1.getMes() << endl;
	cout << data1.getAno() << endl << endl;

	//testando a classe Cliente:
	Cliente cliente1("Eduardo", "slatantofaz@gmail.com", data1, 20);
	Cliente cliente2("Eduardo", "whatever@gamil.com", data1, 20);

	cliente1.setNome("Fulano");
	cliente1.setEmail("naotenhoideia@gmail.com");
	cliente1.setIdade(10);

	cout << cliente1.getNome() << endl;
	cout << cliente1.getEmail() << endl;
	cout << cliente1.getIdade() << endl;
	cliente1.mostrarCliente();

	//testando a classe Conta:
	Conta conta1("02468", "AlgumaAgencia", cliente1);

	conta1.depositar(1050.4);
	conta1.depositar(530.2);
	conta1.retirar(340.7);
	conta1.retirar(5000.0);
	conta1.imprimeExtrato();
	conta1.alterarCliente(cliente2);
	cout << endl;

	//testando a classe Hora:
	Hora hora1(10, 52, 14);
	Hora hora2(9, 30, 50);
	Hora hora3(23, 45, 50);

	hora1.setHora(13);
	hora1.setMinuto(400);
	hora1.setSegundo(-15);

	hora1.mostrarHorario();

	hora1.somaHorario(hora2);
	hora1.somaHorario(hora3);
	hora2.subtraiHorario(hora1);
	hora3.subtraiHorario(hora2);


	return 0;
};
