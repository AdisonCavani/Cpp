#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Podaj nr lekcji\n";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Masz j. polski\n";
        break;

    case 2:
        cout << "Masz matematyke\n";
        break;

    case 3:
        cout << "Masz informatyke\n";
        break;

    default:
        cout << "Jestes po zajeciach\n";
        break;
    }

    return 0;
}