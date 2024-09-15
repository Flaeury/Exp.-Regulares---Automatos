#include <iostream>
#include <regex>
#include <string>
#include <vector>

//funçao para validar nomes
bool validarNome(const std::string& nomeCompleto) {
    std::regex regexNome(
        R"(^[A-Z][a-z]+(\s[A-Z][a-z]+)?\s[A-Z][a-z]+$)"
    );
    return std::regex_match(nomeCompleto, regexNome);
}

int main() {
    //vetor de string para teste do regex
    std::vector<std::string> nomes = {
        "Ada Lovelace",
        "Alan Turing",
        "Stephen Cole Kleene",
        "1Alan",
        "Alan",
        "A1an",
        "A1an Turing",
        "Alan turing"
    };
//laço for que itera no vetor de strings e aplica funcao de verificação
    for (const auto& nome : nomes) {
        if (validarNome(nome)) {
            std::cout << nome << " - valido!" << std::endl;
        } else {
            std::cout << nome << " - invalido!" << std::endl;
        }
    }

    return 0;
}
