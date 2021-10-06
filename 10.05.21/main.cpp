// Adrian Środoń 2IB, zad 2
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Podaj dwie liczby:\n";
    cin >> a >> b;

    if (a > b)
        cout << "Pierwsza liczba jest wieksza";
    else if (a == b)
        cout << "Liczby sa rowne";
    else
        cout << "Druga liczba jest wieksza";

    return 0;
}
