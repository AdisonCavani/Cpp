// Adrian Środoń 3IB

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int p, w;

    cout << "Podaj podstawe: ";
    cin >> p;
    cout << "Podaj wykladnik: ";
    cin >> w;

    cout << "Potega wynosi: " << pow(p, w);

    return 0;
}