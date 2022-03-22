#include "Veiculo.h"
using namespace std;

void Veiculo::imprime() const
{
  cout << "Codigo: " << _codigo << endl;
	cout << "Placa: " << _placa << endl;
	cout << "Cor: " << _cor << endl;
	cout << "Valor: " << _valor << endl;
	cout << "Disponivel: " << _disponivel << endl;
};
