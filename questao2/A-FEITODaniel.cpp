#include <iostream>
#include <regex>
#include <string>
#include <vector>

int main() {
//regex
    std::regex padrao("(MH|HM)((h|m)*m(h|m)*m(h|m)*|(h|m)*h(h|m)*|(h|m)*h(h|m)*h(h|m)*m(h|m)*)");

    // Vetor de strings para testar
    std::vector<std::string> entradas = {
        "MHhmhm",
        "HMhhm",
        "Hmh",
        "Mhmm",
        "HMhmhmm",
        "Mhm",
        "HMh"
    };

//laço for que itera no vetor de strings
    for (const auto& entrada : entradas) {
        if (std::regex_match(entrada, padrao)) {
            std::cout << "A cadeia \"" << entrada << "\" CORRESPONDE ao padrao de uma familia valida." << std::endl;
        } else {
            std::cout << "A cadeia \"" << entrada << "\" NAO corresponde ao padrao de uma familia valida." << std::endl;
        }
    }

    return 0;
}
