#include "Banco.h"

int main()
{
  Conta c1("00001", "Agencia1");
  Conta c2();
  Conta c3("00003", "Agencia3");
  Conta c4("00004", "Agencia4");
  Conta c5()
  
  Banco MeuBanco(10);
  
  MeuBanco._registro.push_back(c1);
  MeuBanco._registro.push_back(c2);
  MeuBanco._registro.push_back(c3);
  MeuBanco._registro.push_back(c4);
  MeuBanco._registro.push_back(c5);
  
  MeuBanco.imprimirContas();
  
  \\------------------------------
    
  Banco SuperBanco(10000);
  
  Conta c6("00006", "Agencia6");
  
  SuperBanco._registro.push_back(c6);
  
  SuperBanco.imprimirContas();
};
