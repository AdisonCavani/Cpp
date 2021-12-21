// Adrian Środoń 3IB
// ZAD.5: Sprawdzenie czy liczby odczytane z pliku są pierwsze przy wykorzystaniu funkcji typu void
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

void JestPierwsza(int n);

int main() {
    int n;
    fstream plik;
    plik.open("dane.txt", ios::in);
    while (!plik.eof()) {
        plik >> n;
        JestPierwsza(n);
    }
    plik.close();
    return 0;
}

void JestPierwsza(int n) {
    int i;
    for (i = 2; i < n && n % i != 0; i++)
        ;
    if (i < n || n <= 2)
        cout << "Liczba " << n << " jest liczba zlozona\n";
    else
        cout << "Liczba " << n << " jest liczba pierwsza\n";
}