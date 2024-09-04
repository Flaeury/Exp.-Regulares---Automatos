#include <iostream>
#include <regex>
#include <string>

bool validarNome(const std::string& nomeCompleto) {
    std::regex regexNome(
        R"(^[A-Z][a-z]+(\s[A-Z][a-z]+)?\s[A-Z][a-z]+$)"
    );
    return std::regex_match(nomeCompleto, regexNome);
}

int main() {
    std::string nomeCompleto;
    char opcao;

    do {
        std::cout << "Digite um nome para validar: ";
        std::getline(std::cin, nomeCompleto);

        if (validarNome(nomeCompleto)) {
            std::cout << nomeCompleto << " e valido!" << std::endl;
        } else {
            std::cout << nomeCompleto << " e invalido!" << std::endl;
        }

        std::cout << "Deseja testar outro nome? (s/n): ";
        std::cin >> opcao;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    } while (opcao == 's' || opcao == 'S');

    return 0;
}
