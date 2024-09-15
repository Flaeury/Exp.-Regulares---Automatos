#include <iostream>
#include <regex>
#include <string>
#include <vector> // Inclua a biblioteca para usar vetores

using namespace std;

bool validarFamiliaHetero(const string& familia) {
    // Expressão regular para casais heterossexuais mais velhos que os filhos,
    // com a filha mais velha mulher (M) e o filho mais novo homem (h).
    regex regex_hetero(^(MH|HM)mh$)
    return regex_match(familia, regex_hetero);
}

int main() {
    // Lista predefinida de cadeias para testar
    vector<string> familias = {
        "MHmh",     // Válida: Casal heterossexual, filha mais velha mulher, filho mais novo homem
        "HMmh",     // Válida: Casal heterossexual, filha mais velha mulher, filho mais novo homem
        "MHmhmh",   // Válida: Casal heterossexual, filha mais velha mulher, filho mais novo homem
        "MHm",      // Inválida: Não termina com filho homem
        "HMhh",     // Inválida: Não há filha mais velha
        "MHhm",     // Inválida: Filho homem antes de filha mulher
        "HMmhm",    // Inválida: Não termina com filho homem
        "MHmhmmh",  // Válida: Casal heterossexual, filha mais velha mulher, filho mais novo homem
        "HMmmmhmh", // Válida: Casal heterossexual, filha mais velha mulher, filho mais novo homem
        "HHmh"      // Inválida: Casal homossexual (HH), não heterossexual
    };

    // Itera sobre a lista de cadeias e testa cada uma
    for (const string& familia : familias) {
        cout << "Testando cadeia: " << familia << " -> ";
        if (validarFamiliaHetero(familia)) {
            cout << "Cadeia válida para a família heterossexual." << endl;
        } else {
            cout << "Cadeia inválida para a família heterossexual." << endl;
        }
    }

    return 0;
}



//questao F agora
#include <iostream>
#include <regex>
#include <string>
#include <vector> // Inclua a biblioteca para usar vetores

using namespace std;

bool validarFamiliaHomo(const string& familia) {
    // Expressão regular para casais homossexuais mais velhos que os filhos,
    // sem dois filhos homens consecutivos (sem "hh").
    regex regex_homo("^(MM|HH)((hm|mh|m)*)?h?$");
    return regex_match(familia, regex_homo);
}

int main() {
    // Lista predefinida de cadeias para testar
    vector<string> familias = {
        "MMmh",       // Válida: Casal homossexual feminino, termina com um filho homem
        "HHmhm",      // Válida: Casal homossexual masculino, sem "hh"
        "MMmm",       // Válida: Casal homossexual feminino, sem "hh"
        "HHm",        // Válida: Casal homossexual masculino, termina com um filho homem
        "MMmhm",      // Válida: Casal homossexual feminino, sem "hh"
        "HHhmh",      // Válida: Casal homossexual masculino, sem "hh"
        "HHmm",       // Válida: Casal homossexual masculino, sem "hh"
        "MMm",        // Válida: Casal homossexual feminino, termina com uma filha
        "MMhm",       // Válida: Casal homossexual feminino, termina com uma filha
        "HH",         // Válida: Casal homossexual masculino, sem filhos
        "MMhh",       // Inválida: Casal homossexual feminino, contém "hh"
        "HHmhhm",     // Inválida: Casal homossexual masculino, contém "hh"
        "MMmhmhh",    // Inválida: Casal homossexual feminino, contém "hh"
        "HHhmhmhh",   // Inválida: Casal homossexual masculino, contém "hh"
        "HHhmhmh",    // Inválida: Casal homossexual masculino, mais de um "h"
        "HHhhh",      // Inválida: Casal homossexual masculino, contém "hh"
        "MMhhm",      // Inválida: Casal homossexual feminino, contém "hh"
        "MHmhm",      // Inválida: Casal heterossexual (MH), não homossexual
        "HHhmh",      // Inválida: Casal homossexual masculino, mais de um "h"
        "MMmmmhm"     // Inválida: Casal homossexual feminino, termina com uma filha
    };

    // Itera sobre a lista de cadeias e testa cada uma
    for (const string& familia : familias) {
        cout << "Testando cadeia: " << familia << " -> ";
        if (validarFamiliaHomo(familia)) {
            cout << "Cadeia válida para a família homossexual." << endl;
        } else {
            cout << "Cadeia inválida para a família homossexual." << endl;
        }
    }

    return 0;
}
