// Adrian Środoń 3IB
// ZAD.4: Sprawdzenie czy losowa liczba jest pierwsza przy wykorzystaniu funkcji typu void
#include <iostream>
#include <time.h>

using namespace std;

void JestPierwsza(int n);

int main() {
    int n;
    srand(time(NULL));
    n = 2 + rand() % (100 - 0 + 1);
    JestPierwsza(n);
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