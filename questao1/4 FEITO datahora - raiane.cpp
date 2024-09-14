#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <locale.h>
#include <windows.h>

using namespace std;

// Função para validar Data e Hora no formato dd/mm/aaaa hh:mm:ss
bool validarDataHora(const string& dataHora) {
    regex regexDataHora(R"(\d{2}/\d{2}/\d{4}\s\d{2}:\d{2}:\d{2})");
    return regex_match(dataHora, regexDataHora);
}

// Função para testar um array de Datas/Horas
void testarDatasHoras(const vector<string>& datasHoras) {
    // For para pular de array para array e testá-los
    for (const string& dataHora : datasHoras) {
        // Chamamos aqui a função do regex, que irá retornar o boleano de cada um dos arrays do vetor datasHoras
        bool resultado = validarDataHora(dataHora);
        cout << dataHora << " - " << (resultado ? "True\n" : "False\n") << endl;
    }
}

int main() {
    // Serve para mostrar caracteres como ~ e ç.
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    // Array de Datas e Horas para validar
    vector<string> datasHoras = {
        "01/01/2020 00:00:00", // True
        "99/99/9999 99:99:99", // True
        "00/00/000099:99:99", // False (sem espaçamento)
        "77/77/7777 00:00:00", // True
        "a5/b5/cccc d5:e5:f5", // False
        "-10/00/0000 64:83:92", // False
    };
   
    cout << "Validando Datas e Horas:\n" << endl;
    testarDatasHoras(datasHoras);
       
}
