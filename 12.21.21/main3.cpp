#include <iostream>
using namespace std;

int ObliczNWD(int a, int b);

int main() {
    int a, b, wybor = 0;
    do {
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;

        cout << ObliczNWD(a, b) << " jest NWD";

        cout << "\nPowtorzyc? 0/1 ";
        cin >> wybor;
    } while (wybor == 1);
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