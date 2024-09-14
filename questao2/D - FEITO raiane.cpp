#include <iostream>
#include <regex>
#include <string>
#include <vector>

using namespace std;

// Função que valida a família baseada no regex
bool validarFamilia(const string& familiaStr) {
    regex regexFamilia("^(MM|HH)(hm|mh)(h|m){2,}(hm|mh)$");
    return regex_match(familiaStr, regexFamilia);
}

int main() {
    // Array de famílias para validação
    vector<string> familias = {
        "MMhmhmhm",   // True
        "HHmhmmhm",   // True
        "MMhmmmhm",   // False
        "HHhmhmmm",   // False
        "MMhmhmhmhm",  // True
        "MMmhhhmmmh"  // True
    };

    // Iterar sobre cada string no array e validar
    for (const string& familia : familias) {
        bool resultado = validarFamilia(familia);
        cout << familia << " - " << (resultado ? "True\n" : "False\n") << endl;
    }

    return 0;
}
