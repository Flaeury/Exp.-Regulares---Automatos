#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool validarSenha(const string& senha) {
    // // Expressão regular para verificar se a senha tem exatamente 8 caracteres
    // regex tamanho_regex("^.{8}$");

    // // Expressão regular para verificar se a senha contém pelo menos uma letra maiúscula
    // regex maiuscula_regex("[A-Z]");

    // // Expressão regular para verificar se a senha contém pelo menos um dígito
    // regex numero_regex("[0-9]");

    regex regex_combinada("^(?=.*[A-Z])(?=.*[0-9]).{8}$");
    
    // // Verifica se a senha tem o tamanho correto
    // if (!regex_match(senha, tamanho_regex)) {
    //     return false;
    // }

    // // Verifica se a senha contém pelo menos uma letra maiúscula
    // if (!regex_search(senha, maiuscula_regex)) {
    //     return false;
    // }

    // // Verifica se a senha contém pelo menos um número
    // if (!regex_search(senha, numero_regex)) {
    //     return false;
    // // }

    // // Se passou por todas as verificações, a senha é válida
    // return true;
    return regex_match(senha, regex_combinada);
}

int main() {
    string senha;
    // do {
    while(true){
    cout << "Digite a senha: ";
    cin >> senha;

    if (validarSenha(senha)) {
        cout << "Senha válida!" << endl;
        break;
    } else {
        cout << "Senha inválida!" << endl;
        }
    }
    // } while (senha != "abortar" || validarSenha(senha) != true);
    // cout << "Programa finalizado." << endl;
    return 0;
}
