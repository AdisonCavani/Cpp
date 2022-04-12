#include <iostream>
using namespace std;

int obliczNwd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    return a;
}

int main() {
    int a, b, nwd;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    nwd = obliczNwd(a, b);
    cout << "NWD " << nwd;

    return 0;
}