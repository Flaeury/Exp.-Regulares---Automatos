#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <locale.h>
#include <windows.h>

using namespace std;

// Função para validar os números reais:
bool validarNumReal(string numRealStr) {
    // Máscara onde estão implementadas as regras de validação dos números:
    regex regexNumReal(R"([+-]?[0-9]+(\.[0-9]+)?)");
    // Retorno da aceitação da cadeia:
    return regex_match(numRealStr, regexNumReal);
}

// Função para testar o array de números reais:
void testarNumReais(const vector<string>& numReais) {
    // For para pular de array para array e testá-los:
    for (const string& numReal : numReais) {
        // Chamamos aqui a função do regex, que irá retornar o boleano de cada um dos arrays do vetor numReais:
        bool resultado = validarNumReal(numReal);
        // Saída será printada ou True ou False:
        cout << numReal << " - " << (resultado ? "True\n" : "False\n") << endl;
    }
}

int main() {
    // Serve para mostrar caracteres como ~ e ç.
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    // Array de emails para estressar a cadeia e fazer os testes
    vector<string> numReais = {
        "0", // true
        "+0", // true
        "-2", // true
        "+2.98", // true
        "5.98989", // true
        "-5.4321", // true
        "+55555", // true
        "-55555", // true
        "+-0", // false
        "+++++12345", // false
        "----1.5555", // false
        "+1.45a2", // false
        "543@1.00*2", // false
        "123.123.0", // false
        "1." // false
    };

    testarNumReais(numReais);

    return 0;
}