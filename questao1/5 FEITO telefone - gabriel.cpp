#include <iostream>
#include <regex>
using namespace std;

bool validarTelefone(const string& telefone) {
    // Expressão regular que valida os formatos aceitos.
    regex regexTelefone(R"(\(\d{2}\) 9\d{4}-\d{4}|\(\d{2}\) 9\d{8}|\d{2} 9\d{8})");

    // Retorna o telefone correspondente.
    return regex_match(telefone, regexTelefone);
}

int main() {
    string telefone;
    cout << "Digite o número de telefone: ";
    getline(cin, telefone);

    if (validarTelefone(telefone)) {
        cout << "Número de telefone válido." << endl;
    } else {
        cout << "\nNúmero de telefone inválido." << endl;
    }

    return 0;
}