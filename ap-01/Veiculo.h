#pragma once
#include <iostream>

class Veiculo
{
 private:
  int _codigo = 0;
  std::string _placa = "";
  std::string _cor = "";
  float _valor = 0.0;
  bool _disponivel = 1;
  
 public:
  void setCodigo(int codigo) { _codigo = codigo; };
  void setPlaca(std::string placa) { _placa = placa; };
  void setCor(std::string cor) { _cor = cor; };
  void setValor(float valor) { _valor = valor; };
  int getCodigo() const { return _codigo; };
  std::string getPlaca() const { return _placa; };
  std::string getCor() const { return _cor; };
  float getValor() const { return _valor; };
  void aluga() { _disponivel = 0; };
  void devolve() { _disponivel = 1; };
  void imprime() const;
};
