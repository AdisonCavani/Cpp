#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main() {
  int n = 10, a = 0, b = 100;
  srand(time(NULL));

  int tab[n];

  for (int i = 0; i < n; i++) {
    tab[i] = rand() % (b - a + 1);
  }

  fstream file;
  file.open("plik.txt", ios::out);

  for (int i = 0; i < n; i++) {
    file << tab[i] << endl;
  }

  return 0;
}
