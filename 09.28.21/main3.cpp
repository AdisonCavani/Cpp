#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    if (a == b)
        cout << a << " jest rowne " << b;

    else if (a > b)
        cout << "a jest wieksze od b";
    else
        cout << "b jest wieksze od a";

    return 0;
}
