// Adrian Środoń 3IB
// zadanie 5, z IV

#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj a, b i c: \n";
    cin >> a >> b >> c;

    if (a == 0)
        cout << "To nie jest rownanie kwadratowe";
    else
    {
        int delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
            cout << "Rownanie nie ma pierwiastkow";
        else
        {
            if (delta == 0)
            {
                int x = -b / (2 * a);
                cout << x;
            }
            else
            {
                int x1 = (-b - sqrt(delta)) / (2 * a);
                int x2 = (-b + sqrt(delta)) / (2 * a);
                cout << "\nx1 = " << x1 << "\nx2 = " << x2;
            }
        }
    }

    return 0;
}