#pragma once
#include "Conta.h"

class Banco
{
private:
  int _tamanho;
  vector<Conta> _registro;
  
public:
  Banco(int tamanho) : _tamanho(tamanho);
  void imprimirContas();
}
