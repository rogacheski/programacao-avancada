1. Colocar um espaço entre o comando e o "(". Mantemos o nome junto apenas quando for função

	if(m <= MINUTO_MAX) _min = m;		// ERRADO
	if (m <= MINUTO_MAX) _min = m;		// CORRETO!

2. Utilizar comandos em linha somente se forem instruções simples. Expressões longas devem ser indentadas corretamente para facilitar leitura.

	const bool ValidarHorario(int h, int m) { 
		if (h <= HORA_MAX && h >= 0 && m < MINUTO_MAX && m >= 0) {
			 return 1; 
		} else { 
			return 0;
		} 
	};

	- Neste exemplo dá para simplificar a expressão:

    	const bool ValidarHorario(int h, int m) { 
		return h <= HORA_MAX && h >= 0 && m < MINUTO_MAX && m >= 0;
	}

3. Nomes de funções devem iniciar com minúscula e tipos em maiúscula\
	- converterParaMinutos(...)
	- validarHorario(...)

4. A indicação que o método é constante está incorreta

	bool validarHorario(int h, int m) const { ... }

5. Se o arquivo .cpp estiver vazio, não precisa incluí-lo no projeto
