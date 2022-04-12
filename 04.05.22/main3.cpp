#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int tab[10][10];

  for (int w = 0; w < 10; w++) {
    for (int k = 0; k < 10; k++) {
      if (w == k)
        tab[w][k] = 0;
      else
        tab[w][k] = (w + 1) * (k + 1);
      cout << tab[w][k] << "\t";
    }
    cout << endl;
  } 

  return 0;
}
