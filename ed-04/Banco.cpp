#include "Banco.h"

void Banco::imprimirContas()
{
  for(int i = 0; i < _registro.size(); i++)
  {
    i.mostrarConta();
  }
};
