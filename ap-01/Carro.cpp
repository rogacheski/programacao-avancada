#include "Carro.h"
#include <iostream>
using namespace std;

void Carro::imprime() const
{
	cout << "Codigo: " << _codigo << endl;
	cout << "Placa: " << _placa << endl;
	cout << "Cor: " << _cor << endl;
	cout << "Combustivel: " << _combustivel << endl;
	cout << "Quilometragem: " << _quilometragem << endl;
	cout << "Valor: " << _valor << endl;
	cout << "Disponivel: " << _disponivel << endl;
};