- No arquivo `relogio.h`:
	- Não precisa importar `iostream` e `iomanip` no cabeçalho porque nenhum tipo destes arquivos é usado na definição dos protótipos dos métodos.
	- Não devemos usar `using namespace` em arquivo cabeçalho

- Observar a nomenclatura dos métodos em português. Métodos indicam ação e devem começar com verbo. Priorizar a legibilidade do código. É mais fácil entender o que `converterParaMinutos()` faz do que `calcHorario()` faz. Usar nomes em português. Só programamos em inglês se (1) a empresa manda, ou (2) estamos trabalhando em um projeto open source.  

- Faltaram as validações do horário

- Faltaram os construtores. Vc criou a função `createRelogio` quena verdade faz o que o construtor deveria fazer.

