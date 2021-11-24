// Zapis danych do plików
// plik - wykorzystany do zapisu do pliku
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int n;
  fstream plik;

  cout << "Podaj górny zakres ciągu liczb: ";
  cin >> n;

  plik.open("dane.txt", ios::out);

  for (int i = 0; i <= n; i++) {
    cout << i << endl;
    plik << i << endl;
  }

  plik.close();
  return 0;
}