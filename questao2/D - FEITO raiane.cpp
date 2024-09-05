#include <iostream>
#include <regex>
#include <string>
#include <locale.h>
#include <windows.h>

// Casais homossexuais mais velhos que os filhos, com pelo menos seis filhos, em que os
// dois primeiros filhos formam um casal e os últimos também.

using namespace std;

bool validarFamilia(string familiaStr) {
    regex regexFamilia("(MM|HH)(hh|mm)(h|m){2,}(hh|mm)$");
    return regex_match(familiaStr, regexFamilia);
}

int main() {
    string familiaStr;
    char opcao;

    do {
        cout << "Insira uma familia: ";
        cin >> familiaStr;

        if(validarFamilia(familiaStr)) {
            cout << "A familia foi validada!" << endl;
        } else {
            cout << "A familia nao foi validada!" << endl;
        }

        cout << "Deseja prosseguir na operacao? (s/n): ";
        cin >> opcao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        
    } while(opcao == 's' || opcao == 'S');

    return 0;
}