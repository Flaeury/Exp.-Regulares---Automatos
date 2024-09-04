# Trabalho de Teoria da Computação

## Universidade Federal do Pará
**Instituto de Ciências Exatas e Naturais**  
**Programa de Pós-Graduação em Ciência da Computação**  
**Disciplina: Teoria da Computação**  
**Professor: Reginaldo Santos**

### Descrição

Este repositório contém o trabalho prático da disciplina de Teoria da Computação, que envolve a implementação de expressões regulares e padrões de validação utilizando a linguagem C++. O trabalho está dividido em duas partes principais:

1. **Validação de Dados:** Implementação de expressões regulares para validar diferentes tipos de dados (nome, e-mail, senha, CPF, telefone, data e horário, número real).
2. **Arranjos Familiares:** Implementação de padrões de arranjos familiares baseados em uma notação específica.

### Estrutura do Repositório

O repositório está organizado da seguinte maneira:

- **src/**: Diretório contendo o código-fonte C++.
  - **validação_dados.cpp**: Implementações para validação de nome, e-mail, senha, CPF, telefone, data e horário, e número real.
  - **arranjos_familiares.cpp**: Implementações para padrões de arranjos familiares.
- **test/**: Diretório para testes dos códigos.
  - **test_validação_dados.cpp**: Testes para o código de validação de dados.
  - **test_arranjos_familiares.cpp**: Testes para o código de arranjos familiares.
- **docs/**: Documentação e relatório do trabalho.
- **README.md**: Este arquivo.

### Instruções de Uso

Para testar um código individualmente:

1. **Abra o arquivo `src/validação_dados.cpp` ou `src/arranjos_familiares.cpp`** conforme o código que deseja testar.
2. **Comente todos os outros códigos** que não são relevantes para o teste atual.
3. **Compile o código** usando um compilador C++ (por exemplo, g++):
   ```sh
   g++ -o main src/validação_dados.cpp  # ou src/arranjos_familiares.cpp
