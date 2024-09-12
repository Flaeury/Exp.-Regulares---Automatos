#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool verificarFamilia(const string &familia, int x, int y) {
  // Criação da expressão regular
  string pattern = "^([HM]{" + to_string(x) + "," + to_string(y) +
                   "})((h|m)*(m(m|h)?(m|h)?))?$";
  regex regexFamilia(pattern);

  // Verifica se a cadeia atende a expressão regular
  return regex_match(familia, regexFamilia);
}

int main() {
  int x, y;
  string familia;

  cout << "Digite o valor mínimo de adultos (x): ";
  cin >> x;
  cout << "\nDigite o valor máximo de adultos (y): ";
  cin >> y;

  cout << "\nInsira a cadeia de caracteres representando a família: ";
  cin >> familia;

  if (verificarFamilia(familia, x, y)) {
    cout << "\nCadeia aceita." << endl;
  } else {
    cout << "\nCadeia rejeitada." << endl;
  }

  return 0;
}