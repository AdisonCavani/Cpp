// Środoń Adrian
// Instrukcja warunkowa if
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Podaj 3 liczby:\n";
    cin >> a >> b >> c;

    if (a > b)
        if (a > c)
            cout << a << " max";
        else
            cout << c << " max";
    else if (c > b)
        cout << c << " max";
    else
        cout << b << " max";

    return 0;
}
