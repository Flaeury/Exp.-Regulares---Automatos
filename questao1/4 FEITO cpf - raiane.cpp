#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <locale.h>
#include <windows.h>

using namespace std;

// Função para validar CPF no formato 000.000.000-00
bool validarFormatoCpf(const string& cpf) {
    regex regexCpf(R"(\d{3}\.\d{3}\.\d{3}-\d{2})");
    return regex_match(cpf, regexCpf);
}

// Função para testar um array de CPFs
void testarCpfs(const vector<string>& cpfs) {
    for (const string& cpf : cpfs) {
        bool resultado = validarFormatoCpf(cpf);
        cout << cpf << " - " << (resultado ? "True\n" : "False\n") << endl;
    }
}


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    // Array de CPFs para validar
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

    cout << "Validando CPFs:\n" << endl;
    testarCpfs(cpfs);
    
}
