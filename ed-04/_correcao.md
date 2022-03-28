- Passagem de objetos sempre por referência

```
    Conta(std::string numero, std::string agencia, Cliente &cliente) : _numero(numero), _agencia(agencia), Cliente(cliente) { mostrarConta(); };
    
        void alterarCliente(Cliente &cliente);

```

- Definição incorreta do método constante

```
    void imprimeExtrato() const;
```

- Métodos simples devem ser definidos como inline:
	- Ou definidos no corpo da classe
	- Ou no arquivo .h com inline na frente

```
void Conta::alterarCliente(Cliente cliente)
{
    _cliente = cliente;
};
```

- No main, o programa está acessando atributo privado? Isso não deve compilar e não deve acontecer. Necessário expor os métodos para incluir e excluir conta

```
  Banco MeuBanco(10);

  MeuBanco._registro.push_back(c1);
  MeuBanco._registro.push_back(c2);
  MeuBanco._registro.push_back(c3);
```

- Código não compila

```
./Conta.h:3:10: fatal error: 'Cliente.h' file not found
#include "Cliente.h"
         ^~~~~~~~~~~
```


