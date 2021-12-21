// Adrian Środoń 3IB
// ZAD.1: Sprawdzenie czy liczba jest pierwsza wraz z powtorzeniem
#include <iostream>

using namespace std;

int main() {
    int n, wybor;
    do {
        cout << "Podaj liczbe do sprawdzenia: ";
        cin >> n;
        if (n <= 2)
            cout << "Liczba " << n << " jest liczba zlozona\n";
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                cout << "Liczba " << n << " jest liczba zlozona\n";
                break;
            }
            cout << "Liczba " << n << " jest liczba pierwsza\n";
            break;
        }
        cout << "Powtorzyc? 0/1\t";
        cin >> wybor;
    } while (wybor == 1);
}