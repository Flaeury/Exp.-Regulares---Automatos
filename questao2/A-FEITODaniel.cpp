#include <iostream>
#include <regex>
#include <string>

int main() {
    std::regex padrao("(MH|HM)((h|m)*m(h|m)*m(h|m)*|(h|m)*h(h|m)*|(h|m)*h(h|m)*h(h|m)*m(h|m)*)");

    std::string entrada;
    char continuar;

    do {
        std::cout << "Insira a cadeia de caracteres que representa a familia: ";
        std::cin >> entrada;

        if (std::regex_match(entrada, padrao)) {
            std::cout << "A cadeia CORRESPONDE ao padrao de uma familia valida." << std::endl;
        } else {
            std::cout << "A cadeia NAO corresponde ao padrao de uma familia valida." << std::endl;
        }

        std::cout << "Deseja testar outra cadeia? (s/n): ";
        std::cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
