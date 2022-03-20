#include "Cliente.h"
#include <iostream>
using namespace std;

void Cliente::imprime() const
{
	cout << "Codigo: " << _codigo << endl;
	cout << "Nome: " << _nome << endl;
	cout << setfill('0') << "Aniversario: "; _aniversario._imprime();
}