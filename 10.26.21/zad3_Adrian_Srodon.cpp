// Adrian Środoń 3IB
// zad.3 - egzamin maturalny z informatyki [...]
#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;

    cout << "Podaj n: ";
    cin >> n;

    while (true)
    {
        if (i >= n)
        {
            cout << "TAK\n";
            break;
        }
        else if (n % i == 0)
        {
            cout << "NIE\n";
            break;
        }
        else
            i++;
    }

    return 0;
}