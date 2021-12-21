// Adrian Środoń 3IB
// ZAD.2: Sprawdzenie czy liczba z zakresu 0 - 100 jest pierwsza
#include <iostream>

using namespace std;

int main() {
    int i;
    for (int n = 2; n <= 100; n++) {
        for (i = 2; i < n && n % i != 0; i++)
            ;
        if (i < n || n <= 2)
            cout << "Liczba " << n << " jest liczba zlozona\n";
        else
            cout << "Liczba " << n << " jest liczba pierwsza\n";
    }
    return 0;
}