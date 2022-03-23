#pragma once
#include "Conta.h"

class Banco
{
private:
  vector<Conta> _registro;
  
public:
  void imprimirContas();
}
