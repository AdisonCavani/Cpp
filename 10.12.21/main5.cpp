#include <iostream>
using namespace std;

int main()
{
    int s = 0, n, x;
    cout << "Podaj liczbe: ";
    cin >> n;

    for (int i = 1;; i++)
    {
        x = n % 10;
        s = s + x;
        n = n / 10;

        if (n == 0)
            break;
    }
    cout << s;

    return 0;
}