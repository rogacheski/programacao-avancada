#pragma once
#include "Conta.h"

class Banco
{
private:
  vector<Conta> registro;
  
public:
  void imprimirContas();
}
