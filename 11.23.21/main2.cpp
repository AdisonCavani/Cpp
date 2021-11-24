#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int a = 1, b = 2, c = 3, d = 4;
  fstream file;
  file.open("dane.txt", ios::out | ios::app);

  file << a << "\t" << b << endl << c << "\t" << d << endl;

  file.close();
  return 0;
}