// Adrian Środoń 3IB
// zad.4 - egzamin maturalny z informatyki [...]
#include <iostream>
using namespace std;

int main()
{
    int n, d = 1;

    cout << "Podaj n: ";
    cin >> n;

    while (d < n)
    {
        if (n % d == 0)
        {
            cout << d << endl;
            d++;
        }
        else
            d++;
    }

    return 0;
}