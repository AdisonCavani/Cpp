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
        while (a != b) {
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }
        cout << a << " jest NWD";
        cout << "\nPowtorzyc? 0/1 ";
        cin >> wybor;
    } while (wybor == 1);
}

int ObliczNWD(int a, int b) {
}