- Tem um ; no meio da instrução. Vai dar erro de compilação

```
    ContaCorrente() : Conta(), Investimento(0.03), _numero(""), _agencia(""), _cliente(Cliente();) _saldo(0.0);
```

- Faltou o tipo das variáveis

```
    void aplicarJurosDiarios(dias, taxa);
```

- Os atributos da classe pai foram declarados de volta nas classes filhas? Com isso, a função de calcular os juros vai alterar a variável da filha e não a variável herdada...

```
    std::string _numero;
    std::string _agencia;
    Cliente _cliente;
    float _saldo;
    std::vector<std::string> extrato;
```

- Código não compila

- Por quê o construtor não chama o método setTaxa?

```
public:
    Investimento(float taxaJuros) { if (taxaJuros >= 0 && taxaJuros <= 1) _taxaJuros = taxaJuros; };
    void setTaxa(float taxaJuros) { if (taxaJuros >= 0 && taxaJuros <= 1) _taxaJuros = taxaJuros; };
```

- Faltou indicar os métodos constantes

