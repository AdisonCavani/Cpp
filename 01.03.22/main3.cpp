#include <fstream>
#include <iostream>
using namespace std;

int obliczNwd(int a, int b) {
    while (a > 0) {
        a %= b;
        b -= a;
    }

    return b;
}

int main() {
    int a, b, i = 1;
    fstream plik;
    plik.open("pary_liczb.txt", ios::in);
    while (!plik.eof()) {
        plik >> a;
        plik >> b;

        cout << i << ") " << obliczNwd(a, b) << " jest NWD\n";
        i++;
    }
    plik.close();

    return 0;
}