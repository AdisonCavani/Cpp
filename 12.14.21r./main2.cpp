#include <iostream>
using namespace std;

int main() {
  int zakres = 0, prime = 0;
  cout << "Podaj zakres: ";
  cin >> zakres;
  
  for (int i = 0; i <= zakres; i++) {
    for (int j = 2; j < i; j++) {
      if (i % j != 0) {
        cout << i << endl;
        prime++;
        break;
      }
      else {
        
      }
    }
  }
  
  cout << "\nIlosc liczb pierwszych w zakresie od 0 - "  << zakres << " wynosi: " << prime;
  
  return 0;
}