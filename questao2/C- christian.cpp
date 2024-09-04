#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool validarFamiliaHetero(const string& familia) {
    // Expressão regular para casais heterossexuais mais velhos que os filhos,
    // com a filha mais velha mulher (M) e o filho mais novo homem (h).
    regex regex_hetero("^MH(mh)*h$");
    return regex_match(familia, regex_hetero);
}

int main() {
    string familia;
    cout << "Digite a cadeia que representa a família: ";
    cin >> familia;

    if (validarFamiliaHetero(familia)) {
        cout << "Cadeia válida para a família heterossexual." << endl;
    } else {
        cout << "Cadeia inválida para a família heterossexual." << endl;
    }

    return 0;
}