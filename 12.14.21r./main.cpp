#include <iostream>
using namespace std;

int main() {
  int n, a = 0;
  int wybor;
  do {
    a = 0;
    cout << "Sprawdz liczbe:\n";
    cin >> n;
    
    for (int i = 2; i < n; i++) {
      if (n % i != 0) {
        
      }
      else {
        cout << "Liczba jest zlozona\n";
        cout << "Jeszcze raz? 0/1\t";
        cin >> wybor;
      }
    }
    
  } while (wybor == 1);
}
