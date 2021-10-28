// Adrian Środoń 3IB
// zad.1 - Sprawdź jaka będzie wartość dla wczytanych x=5, y=7
#include <iostream>
using namespace std;

int main()
{
    string run;

    do
    {
        int x, y, z = 5;

        cout << "Podaj x oraz y:\n";
        cin >> x >> y;

        x += 2;

        if (x < y)
        {
            x *= z;
            y -= 1;
        }

        else
        {
            if (x == y)
            {
                y -= z;
                x--;
            }

            else
            {
                y += z;
                x++;
            }
        }

        cout << "x wynosi: " << x << ", y wynosi: " << y << endl;
        cout << "Czy chcesz kontynuować? t/n\n";
        cin >> run;
    } while (run == "t");

    cout << "Program zakonczony";

    return 0;
}