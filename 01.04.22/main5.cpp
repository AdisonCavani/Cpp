#include <fstream>
#include <iostream>
using namespace std;

int sumaCyfr(int a) {
    int suma;
    while (a) {
        suma += a % 10;
        a /= 10;
    }

    return suma;
}

int main() {
    int a, b, suma, suma2, i;
    fstream plik;
    plik.open("pary_liczb4.txt", ios::in);
    while (!plik.eof()) {
        plik >> a;
        suma += a;
        b = sumaCyfr(a);
        suma2 += b;

        cout << ++i << ") Suma cyfr liczby " << a << " wynosi: " << b << endl;
    }
    plik.close();
    cout << "Suma wynosi: " << suma << endl;
    cout << "Suma cyfr wynosi: " << suma2 << endl;

    return 0;
}