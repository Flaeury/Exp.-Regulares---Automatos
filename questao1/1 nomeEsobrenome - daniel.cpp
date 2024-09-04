// #include <iostream>  // Inclui a biblioteca de entrada e saída padrão, necessária para usar std::cout e std::cin.
// #include <regex>     // Inclui a biblioteca de expressões regulares, necessária para usar std::regex e std::regex_match.
// #include <string>    // Inclui a biblioteca de strings, necessária para usar std::string.

// bool validarNome(const std::string& nomeCompleto) {
//     // Define uma expressão regular para validar o nome completo.
//     // O padrão é: Uma ou duas palavras onde cada palavra começa com uma letra maiúscula seguida de letras minúsculas.
//     std::regex regexNome(
//         R"(^[A-Z][a-z]+(\s[A-Z][a-z]+)?\s[A-Z][a-z]+$)"
//     );

//     // std::regex_match verifica se a string 'nomeCompleto' corresponde ao padrão definido por 'regexNome'.
//     return std::regex_match(nomeCompleto, regexNome);
// }

// int main() {
//     std::string nomeCompleto;  // Declara uma string para armazenar o nome completo fornecido pelo usuário.
//     char opcao;                // Declara uma variável para armazenar a escolha do usuário (s ou n).

//     do {
//         std::cout << "Digite um nome para validar: "; // Solicita ao usuário para digitar um nome.
//         std::getline(std::cin, nomeCompleto); // Lê a linha completa de entrada do usuário e armazena na variável 'nomeCompleto'.

//         if (validarNome(nomeCompleto)) { // Chama a função validarNome para verificar se o nome é válido.
//             std::cout << nomeCompleto << " e valido!" << std::endl; // Se o nome for válido, imprime uma mensagem indicando que é válido.
//         } else {
//             std::cout << nomeCompleto << " e invalido!" << std::endl; // Se o nome não for válido, imprime uma mensagem indicando que é inválido.
//         }

//         std::cout << "Deseja testar outro nome? (s/n): "; // Pergunta ao usuário se deseja testar outro nome.
//         std::cin >> opcao; // Lê a escolha do usuário.
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpa o buffer de entrada para evitar problemas ao ler a próxima linha.

//     } while (opcao == 's' || opcao == 'S'); // Continua o loop enquanto a escolha do usuário for 's' ou 'S'.

//     return 0; // Finaliza o programa com sucesso.
// }
