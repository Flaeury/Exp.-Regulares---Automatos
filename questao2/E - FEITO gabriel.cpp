#include <iostream>
#include <regex>
#include <string>

using namespace std;

// Função para validar a cadeia.
bool validarCadeia(const string& cadeia) {
    // Regex para casais homossexuais (HH ou MM) com filhos alternados.
    regex regexItemA("^(HH|MM)((mh)|(hm)|(m(hm))?|(h(mh))?)$");
    return regex_match(cadeia, regexItemA);
}

int main() {
    string cadeia;
    cout << "Insira a cadeia de caracteres representando a família: ";
    cin >> cadeia;

    if (validarCadeia(cadeia)) {
        cout << "Cadeia aceita.";
    } else {
        cout << "\nCadeia rejeitada.";
    }

    return 0;
}