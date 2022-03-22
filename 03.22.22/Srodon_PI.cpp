// Program wyznacza liczbę PI metodą "monte-carlo" i oblicza pole koła losując promień
// Adrian Środoń 3IB

#include <fstream>
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

float obliczPi(int ilosc);
float obliczPole(float pi, int r);

int main() {
    srand(time(NULL));
    int a = 1, b = 10;

    cout << "Losowanie liczb calk od 0 do 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << a + rand() % (b - a + 1) << endl;
    }
    cout << "----------------------------------------------" << endl;

    cout << "Losowanie liczb rzecz od -1 do 1:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << -1 + (float)rand() / (RAND_MAX) * (1 + 1) << endl;
    }
    cout << "----------------------------------------------" << endl;

    float pi = obliczPi(1000000); // Dokładność PI
    cout << "Wyznaczono liczbe PI: " << pi << endl << "----------------------------------------------" << endl;

    for (int i = 1; i <= 10; i++) {
        float wynik = obliczPole(pi, i);
        cout << "r wynosi: " << i << ".\tPole kola wynosi: " << wynik << endl;
    }
}

float obliczPi(int ilosc) {
    int s = 0;
    int t = 0;

    for (; s < ilosc; s++) {
        float a = (float)rand() / (RAND_MAX) * (1);
        float b = (float)rand() / (RAND_MAX) * (1);

        if (pow(a, 2) + pow(b, 2) <= 1)
            t++;
    }

    return (float)4 * (float)t / (float)s;
}

float obliczPole(float pi, int r) {
    return pi * pow(r, 2);
}