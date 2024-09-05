#include <iostream>
#include <regex>

using namespace std;

bool validarFamilia(string familiaStr) {
    regex regexFamilia("(MH|HM)h*mh*(h*mh*mh*)*");
    return regex_match(familiaStr, regexFamilia);
}

int main() {
    string familiaStr;
    char opcao;

    cout << "Deseja prosseguir na operacao? (s/n): ";
    cin >> opcao;

    while(opcao == 's' || opcao == 'S') {
        cout << "Insira uma familia: ";
        cin >> familiaStr;

        if(validarFamilia(familiaStr)) {
            cout << "A familia foi validada!" << endl;
        } else {
            cout << "A familia nao foi validada!" << endl;
        }

        cout << "Deseja prosseguir na operacao? (s/n): ";
        cin >> opcao;
    }

    return 0;
}