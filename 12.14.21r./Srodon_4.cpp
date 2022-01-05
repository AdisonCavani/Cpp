// Adrian Srodon 3IB
// ZAD.4: Czytanie liczb z plik.txt i sprawdzanie czy jest pierwsza

#include <iostream>
#include <fstream>
using namespace std;

void JestPierwsza(int n);

int main() {
  int n = 16;
  int i;
  for (i = 2; i < n && n % i != 0; i++) ;
  
    if (i < n) {
      cout << "Liczba " << n << " jest zlozona\n";
    }
    else {
      cout << "Liczba " << n << " jest pierwsza\n";
    }
  

  return 0;
}
