#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int i = 1;
    int min;
    int ilosc = 5;
    int zakres = 100;

    srand(time(NULL));

    while (i <= ilosc)
    {
        int now = rand() % (zakres + 1);        
        cout << i << ") " << now << endl;

        if(min >= now)
            min = now;

        i++;
    }

    cout << endl << "Min liczba wynosi: " << min;

    return 0;
}
