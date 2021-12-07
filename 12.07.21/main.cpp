#include <iostream>
using namespace std;

int main() {
  int k;
  cout << "Podaj k: ";
  cin >> k;

  srand(time(NULL));
  int a = rand() % (b - a + 1);
  int min = a;

  while (k > 1) {
    a = rand() % (b - a + 1);
    k--;
    if (a < min) {
      min = a;
    }
  }

  return 0;
}