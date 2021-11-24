#include <time.h>

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int n = 10;
  fstream file;
  file.open("dane.txt", ios::out | ios::app);

  srand(time(NULL));

  for (int i = 0; i < n; i++) {
    file << rand() % (1 + n) << "\n";
  }

  file.close();
  return 0;
}