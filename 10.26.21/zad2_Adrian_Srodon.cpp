// Adrian Środoń 3IB
// zad.2 - egzamin maturalny z informatyki [...]
#include <iostream>
using namespace std;

int main()
{
    int n, d = 2;

    cout << "Podaj n: ";
    cin >> n;

    while (n >= d)
    {
        if (n % d == 0)
        {
            cout << d << endl;
            n /= d;
        }
        else
            d++;
    }

    return 0;
}