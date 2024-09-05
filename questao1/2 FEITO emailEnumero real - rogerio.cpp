#include <iostream>
#include <regex>

using namespace std;

bool validarEmail(string emailStr) {
    regex regexEmail("[a-z]+@[a-z]+(\.com)?\.br");
    return regex_match(emailStr, regexEmail);
}

bool validarNumReal(string numRealStr) {
    regex regexNumReal("[+-]?[0-9]+(\.[0-9]+)?");
    return regex_match(numRealStr, regexNumReal);
}

int main() {
    string emailStr, numRealStr;
    char opcao;

    cout << "Deseja prosseguir na operacao? (s/n): ";
    cin >> opcao;

    while(opcao == 's' || opcao == 'S') {
        cout << "Insira um email: ";
        cin >> emailStr;

        if(validarEmail(emailStr)) {
            cout << "O email foi validado!" << endl;
        } else {
            cout << "O email nao foi validado!" << endl;
        }

        cout << "Insira um numero real: ";
        cin >> numRealStr;

        if(validarNumReal(numRealStr)) {
            cout << "O numero eh compativel!" << endl;
        } else {
            cout << "O numero nao eh compativel!" << endl;
        }

        cout << "Deseja prosseguir na operacao? (s/n): ";
        cin >> opcao;
    }

    return 0;
}