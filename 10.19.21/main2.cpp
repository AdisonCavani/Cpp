#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int i = 1;
    int max = 0;
    int ilosc = 5;
    int zakres = 100;

    srand(time(NULL));

    while (i <= ilosc)
    {
        int now = rand() % (zakres + 1);
        cout << i << ") " << now << endl;

        if (now >= max)
            max = now;

        i++;
    }

    cout << endl << "Max liczba wynosi: " << max << endl << endl;

    return 0;
}
