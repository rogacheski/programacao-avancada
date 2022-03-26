#pragma once
#include <iostream>

class Veiculo
{
 private:
  int _codigo;
  std::string _placa;
  std::string _cor;
  float _valor;
  bool _disponivel;
  
 public:
  Veiculo() : _codigo(0), _placa(""), _cor(""), _valor(0.0), _disponivel(1);
  void setCodigo(int codigo) { _codigo = codigo; };
  void setPlaca(std::string placa) { _placa = placa; };
  void setCor(std::string cor) { _cor = cor; };
  void setValor(float valor) { _valor = valor; };
  int getCodigo() const { return _codigo; };
  std::string getPlaca() const { return _placa; };
  std::string getCor() const { return _cor; };
  float getValor() const { return _valor; };
  virtual void aluga() = 0;
  virtual void devolve() = 0;
  virtual void imprime() const = 0;
};
