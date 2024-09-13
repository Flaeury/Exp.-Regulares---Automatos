#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <locale.h>
#include <windows.h>

using namespace std;

// Função para validar CPF no formato 000.000.000-00
bool validarFormatoCpf(const string& cpf) {
    // Máscara onde está implementada as leis para aceitação no formato CPF
    regex regexCpf(R"(\d{3}\.\d{3}\.\d{3}-\d{2})");
    // Retorna True ou False
    return regex_match(cpf, regexCpf);
}

// Função para testar o array de CPFs
void testarCpfs(const vector<string>& cpfs) {

    // For para pular de array para array e testá-los
    for (const string& cpf : cpfs) {
        // Chamamos aqui a função do regex, que irá retornar o boleano de cada um dos arrays do vetor CPF
        bool resultado = validarFormatoCpf(cpf);
        // Saída será printada ou True ou False
        cout << cpf << " - " << (resultado ? "True\n" : "False\n") << endl;
    }
}

int main() {
    // Serve para mostrar caracteres como ~ e ç.
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    // Array de CPFs para estressar a cadeia e fazer os testes
    vector<string> cpfs = {
        "123.456.789-00",   // True
        "999.999.999-99",   // True
        "9.229.229.229-00",  // False
        "123.123.123-1a", // False 
        "111.111.111-11",   // True
        "123.456.789-0",    // False
        "000.111.222-33", // True
        "248.163.264-22", // True
        "abc.def.ghi-jk", // False
        "987.654.321-99"   // True
    };

    // Saída com prints do resultado
    cout << "Validando CPFs:\n" << endl;
    testarCpfs(cpfs);
    
}
