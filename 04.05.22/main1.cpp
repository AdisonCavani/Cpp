#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream plik;
  int n = 100;
  int tab[n];

  plik.open("lista_100_t.txt", ios::in);

  if (!plik) {
    cout << "Problem z plikiem" << endl;
    return 1;
  }

  int i = 0;

  while(!plik.eof()) {
    plik >> tab[++i];
  }

  for (int i = 0; i < n; i++) {
    cout << i + 1 << "\t" << tab[i] << endl;
  }

  return 0;
}
