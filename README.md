# Exp-Regulares-Automatos

Este repositório contém o trabalho prático para a disciplina de Teoria da Computação. O trabalho está dividido em duas questões, com implementações e testes variados para expressões regulares e autômatos.

## Estrutura do Repositório

O repositório está organizado da seguinte forma:

- **.ccls-cache/**: Diretório contendo arquivos de cache para a configuração do CCLS (C/C++ Language Server).
- **.vscode/**: Configurações para o Visual Studio Code.
  - **c_cpp_properties.json**: Configurações do IntelliSense para C++.
  - **launch.json**: Configurações para depuração no VSCode.
  - **settings.json**: Outras configurações do VSCode.
- **questao1/**: Implementações referentes à Questão 1.
  - **1_nomeEsobrenome_daniel.cpp**: Implementação para validação de nome e sobrenome.
  - **2_emailEnumero_real_rogerio.cpp**: Implementação para validação de e-mail e número real.
  - **3_senha_christian.cpp**: Implementação para validação de senha.
  - **4_cpfEdatahora_raiane.cpp**: Implementação para validação de CPF e data/hora.
  - **5_telefone_gabriel.cpp**: Implementação para validação de telefone.
- **questao2/**: Implementações referentes à Questão 2.
  - **A_daniel.cpp**: Implementação para o padrão A da Questão 2.
  - **B_rogerio.cpp**: Implementação para o padrão B da Questão 2.
  - **C_christian.cpp**: Implementação para o padrão C da Questão 2.
  - **D_raiane.cpp**: Implementação para o padrão D da Questão 2.
  - **E_gabriel.cpp**: Implementação para o padrão E da Questão 2.
  - **F_christian.cpp**: Implementação para o padrão F da Questão 2.
  - **G_gabriel.cpp**: Implementação para o padrão G da Questão 2.
- **.breakpoints**: Arquivo para a configuração de breakpoints durante a depuração.
- **.gitignore**: Arquivo que define quais arquivos e diretórios devem ser ignorados pelo Git.
- **.replit**: Configuração para o ambiente Replit.
- **1_trabalho_expressao_regular.pdf**: Documento PDF contendo o relatório do trabalho.
- **Makefile**: Arquivo de build para compilar o projeto.
- **README.md**: Este arquivo de instruções.

## Como Rodar o Código

Para compilar e testar as implementações, siga os passos abaixo:

1. **Certifique-se de ter o compilador C++ instalado** (por exemplo, `g++`).

2. **Compile o código** usando o Makefile incluído no projeto. No diretório raiz do projeto, execute:
   ```sh
   make
Isso compilará todos os arquivos C++ e gerará os executáveis correspondentes.

Execute o programa desejado. Navegue até o diretório correspondente e execute o arquivo binário gerado. Por exemplo:

sh
Copiar código
./questao1/1_nomeEsobrenome_daniel
Para testar o código individualmente, abra o arquivo desejado dentro do diretório questao1/ ou questao2/, edite conforme necessário e compile com:

sh
Copiar código
g++ -o main questao1/1_nomeEsobrenome_daniel.cpp
./main
Documentação
O relatório completo do trabalho está disponível no arquivo 1_trabalho_expressao_regular.pdf.

Configuração do Ambiente de Desenvolvimento
Visual Studio Code: Use as configurações em .vscode/ para configurar o ambiente de desenvolvimento.
Replit: O arquivo .replit contém as configurações necessárias para rodar o projeto no ambiente Replit.
Contribuições
Sinta-se à vontade para contribuir com melhorias ou correções para este projeto. Para isso, siga as melhores práticas de contribuição do GitHub, como fork, branches e pull requests.
