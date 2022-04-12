#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int n, r;
    float fi, x = 0, y = 0;
    fstream file;
    srand(time(NULL));

    cout << "Podaj ilosc krokow: ";
    cin >> n;
    file.open("brown.txt", ios::out);

    for (int i = 0; i < n; i++) {
        fi = (float)rand() / RAND_MAX * 2 * M_PI;
        x += cos(fi);
        y += sin(fi);
        file << x << ',' << y << endl;
        cout << x << ' ' << y << endl;
    }

    file.close();
    cout << "Przemieszczenie punktu wynosi: " << sqrt(pow(x, 2) + pow(y, 2));

    return 0;
}
