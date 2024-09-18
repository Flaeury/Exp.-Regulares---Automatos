#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <locale.h>
#include <windows.h>

using namespace std;

// Função para validar a família: 
bool validarFamilia(string familiaStr) {
    // Máscara onde estão implementadas as regras de validação da família:
    regex regexFamilia("(MH|HM)h*mh*(h*mh*mh*)*");
    // Retorno da aceitação da cadeia:
    return regex_match(familiaStr, regexFamilia);
}

// Função para testar o array de familias:
void testarFamilia(const vector<string>& familias) {
    // For para pular de array para array e testá-los:
    for (const string& familia : familias) {
        // Chamamos aqui a função do regex, que irá retornar o boleano de cada um dos arrays do vetor familias:
        bool resultado = validarFamilia(familia);
        // Saída será printada ou True ou False:
        cout << familia << " - " << (resultado ? "True\n" : "False\n") << endl;
    }
}

int main() {
    // Serve para mostrar caracteres como ~ e ç.
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    // Array de emails para estressar a cadeia e fazer os testes
    vector<string> familias = {
        "HMhmhmhmh", // true
        "MHmhhh", // true
        "MHhhhhmhmhhhmh", // true
        "HMhmmhm", // true
        "HMhm", // true
        "HMhhh", // false
        "MHhhmhmhhhh", // false
        "Mhmhmhmhhh", //false
        "hhmhhhmhhhmhhhh", // false
        "MHhmhmha", // false
        "HM22m", // false
        "HMhmh-mhm@h*", // false
        "MHhmhmhmhmhh" // false
    };

    testarFamilia(familias);

    return 0;
}