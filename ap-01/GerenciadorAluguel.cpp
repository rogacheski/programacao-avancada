#include "GerenciadorAluguel.h"
#include <iostream>
using namespace std;

void GerenciadorAluguel::imprimirCarro() const
{
    cout << "Data inicial de aluguel: "; _aluguelCarro._dataInicio._imprime();
    cout << "Data final de aluguel: "; _aluguelCarro._dataEntrega._imprime();
    _aluguelCarro._carro.imprime();
}

void GerenciadorAluguel::imprimirBicicleta() const
{
    cout << "Data inicial de aluguel: "; _aluguelBicicleta._dataInicio._imprime();
    cout << "Data final de aluguel: "; _aluguelBicicleta._dataEntrega._imprime();
    _aluguelBicicleta._bicicleta.imprime();
}