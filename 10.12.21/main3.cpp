#include <iostream>
using namespace std;

int main()
{
    int n, s = 1;
    cout << "Podaj n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s = s * i;
    }

    cout << "s! wynosi: " << s;

    return 0;
}