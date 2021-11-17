// Adrian Środoń 3IB
// Potęgowanie - zadanie VI.6

#include <iostream>
using namespace std;

int main()
{
    cout << "Tabliczka mnozenia dla liczb od 1-100: \n";

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}