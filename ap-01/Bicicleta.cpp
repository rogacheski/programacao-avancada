#include "Bicicleta.h"
#include <iostream>
using namespace std;

void Bicicleta::imprime() const
{
  cout << "Codigo: " << _codigo << endl;
	cout << "Placa: " << _placa << endl;
	cout << "Cor: " << _cor << endl;
	cout << "Valor: " << _valor << endl;
	cout << "Disponivel: " << _disponivel << endl;
};
