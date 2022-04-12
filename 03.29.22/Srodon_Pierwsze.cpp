#include<iostream>
#include<cmath>
#include<fstream>
#include<time.h>
#include<cstdlib>

using namespace std;

bool check(int n);
bool liczbaPierwsza(int n);

int main() {
    int liczba;
    fstream plik, plik2;
    plik.open("liczby.txt", ios::in);
    plik2.open("zad_5.txt", ios::out);

    while (!plik.eof()) {
        plik >> liczba;

        if (check(liczba)) {
            cout << liczba << endl;
            plik2 << liczba << endl;
        }

    }
    plik.close();
    plik2.close();

    return 0;
}

bool check(int n) {
    float liczba = sqrt(n);

    if (liczba == (int)liczba && liczbaPierwsza((int)liczba)) {
        return true;
    }

    return false;
}

bool liczbaPierwsza(int n) {
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    
    int dzielniki = 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            dzielniki++;
    }

    if (dzielniki == 0)
        return true;
    return false;
}