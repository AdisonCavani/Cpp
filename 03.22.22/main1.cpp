#include<iostream>
#include<cmath>
#include<fstream>
#include<time.h>
#include<cstdlib>

using namespace std;

int main() {
  srand(time(NULL));
  int n = 1;
  float x = 0, y = 0;
  cout << "Podaj n: ";
  cin >> n;
  fstream plik;
  plik.open()

  for (int i = 1; i <= n; i++) {
    float fi = (float)rand() / RAND_MAX * 2 * M_PI;
    x += cos(fi);
    y += sin(fi);
    plik << x << "\t" << y << endl;
  }

  plik.close();

  float s = sqrt(pow(x, 2) + pow(y, 2));
  cout << "S wynosi: " << s << endl;

  return 0;
}
