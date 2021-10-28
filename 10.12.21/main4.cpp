#include <iostream>
using namespace std;

int main()
{
    int n, s = 1;
    string odp;
    cout << "Podaj n: ";
    cin >> n;

    for (;;)
    {
        for (int i = 1; i <= n; i++)
            s = s * i;
        cout << "s! wynosi: " << s << endl;

        cout << "Kontynuowac? t/n ";
        cin >> odp;

        if (odp == "n")
            break;
    }

    cout << "Program zakonczony";

    return 0;
}