// Adrian Środoń 3IB
// NWD wersja 4
#include <fstream>
#include <iostream>
using namespace std;

int ObliczNWD(int a, int b);

int main() {
    int a, b, i = 1;
    fstream plik;
    plik.open("pary_liczb.txt", ios::in);
    while (!plik.eof()) {
        plik >> a;
        plik >> b;

        cout << i << ") " << ObliczNWD(a, b) << " jest NWD\n";
        i++;
    }
    plik.close();
}

int ObliczNWD(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}