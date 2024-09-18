#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <locale.h>
#include <windows.h>

using namespace std;

// Função para validar os emails:
bool validarEmail(string emailStr) {
    // Máscara onde estão implementadas as regras de validação de email:
    regex regexEmail(R"(^[a-z]+@[a-z]+(\.com)?\.br)");
    // Retorno da aceitação da cadeia:
    return regex_match(emailStr, regexEmail);
}

// Função para testar o array de emails
void testarEmails(const vector<string>& emails) {

    // For para pular de array para array e testá-los:
    for (const string& email : emails) {
        // Chamamos aqui a função do regex, que irá retornar o boleano de cada um dos arrays do vetor emails:
        bool resultado = validarEmail(email);
        // Saída será printada ou True ou False:
        cout << email << " - " << (resultado ? "valido!\n" : "invalido!\n") << endl;
    }
}

int main() {
    // Serve para mostrar caracteres como ~ e ç.
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    // Array de emails para estressar a cadeia e fazer os testes
    vector<string> emails = {
        "rogerio@ufpa.br", // true
        "rogerio@ufpa.com.br", // true
        "roger1o@ufpa.br", // false
        "r@gerio@ufpa.br", // false
        "rogerio@ufpa.com.brr", // false
        "rg@ufpa..br", // false
        "rg@.com.br", // false
        "rg@ufpa.ccm.br", // false
        "@ufpa.com.br", // false
        "rogerio@UFPA.br", // false
        "RogErio@ufpa.com.br", // false
        "rogerio@gmail.com.br" // true
    };

    testarEmails(emails);

    return 0;
}