#include <iostream>
#include <regex>
#include <string>
#include <vector> // Inclua a biblioteca para usar vetores

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
    // Lista predefinida de senhas para testar
    vector<string> senhas = {
        "Password1",   // Válida
        "password",    // Inválida (sem letra maiúscula e sem número)
        "12345678",    // Inválida (sem letra)
        "ABCDEFGH",    // Inválida (sem número)
        "Pass1234",    // Válida
        "Short1",      // Inválida (menos de 8 caracteres)
        "ValidPass9",  // Válida
        "invalidpass", // Inválida (sem número e sem letra maiúscula)
        "INV4LID",     // Inválida (menos de 8 caracteres)
        "Go9odPass"    // Válida
    };

    // Itera sobre a lista de senhas e testa cada uma
    for (const string& senha : senhas) {
        cout << "Testando senha: " << senha << " -> ";
        if (validarSenha(senha)) {
            cout << "Senha válida!" << endl;
        } else {
            cout << "Senha inválida!" << endl;
        }
    }

    return 0;
}
