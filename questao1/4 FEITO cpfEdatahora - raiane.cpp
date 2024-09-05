#include <iostream>
#include <regex>
#include <string>
#include <locale.h>
#include <windows.h>

using namespace std;

bool validarFormatoCpf(const string& cpf) {
    regex regexCpf(R"(\d{3}\.\d{3}\.\d{3}-\d{2})");
    return regex_match(cpf, regexCpf);
}

bool validarDataHora(const string& dataHora) {
   regex regexDataHora(R"(\d{2}/\d{2}/\d{4}\s\d{2}:\d{2}:\d{2})");

   
    return regex_match(dataHora, regexDataHora);
}

void testarCpf() {
    string cpf;
    char opcao;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    do {
        cout << "Insira um CPF no formato 000.000.000-00: ";
        cin >> cpf; 

        if (validarFormatoCpf(cpf)) {
            cout << cpf << " é válido!" << endl;
        } else {
            cout << cpf << " é inválido!" << endl;
        }

        cout << "Deseja inserir outro? (s/n): ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (opcao == 's' || opcao == 'S');
    
}

int testarDataHora() {
    char opcao;
    string dataHora;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    do {
       
        cout << "Insira a Data e Hora no formato dd/mm/aaaa hh:mm:ss: ";
        getline(cin, dataHora);  

        if (validarDataHora(dataHora)) {
            cout << dataHora << " é válida!" << endl;
        } else {
            cout << dataHora << " é inválida!" << endl;
        }

        cout << "Deseja inserir outra? (s/n): ";
        cin >> opcao;
      
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    } while (opcao == 's' || opcao == 'S');

    return 0;
}

int main() {
    int escolha;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    while (true) {
  
        cout << "Escolha uma opção:" << endl;
        cout << "1 - CPF" << endl;
        cout << "2 - Data" << endl;
        cout << "3 - Sair" << endl;
        cin >> escolha;
        cin.ignore();

        if (escolha == 1) {
            testarCpf();
        } else if (escolha == 2) {
            testarDataHora();
        } else if (escolha == 3) {
            cout << "Saindo..." << endl;
            exit(0);  
        } else {
            cout << "Opção inválida. Por favor, escolha novamente." << endl;
        }
    }

    return 0;
}
