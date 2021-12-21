// Adrian Środoń 3IB
// ZAD.3: Sprawdzenie czy losowe 10 liczb są liczbami pierwszymi
#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int i, n;
    srand(time(NULL));
    for (int j = 1; j <= 10; j++) {
        n = 2 + rand() % (100 - 0 + 1);
        for (i = 2; i < n && n % i != 0; i++)
            ;
        if (i < n || n <= 2)
            cout << "Liczba " << n << " jest liczba zlozona\n";
        else
            cout << "Liczba " << n << " jest liczba pierwsza\n";
    }
    return 0;
}
