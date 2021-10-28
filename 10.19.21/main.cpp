#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int zakres = 10, i = 1;
    srand(time(NULL));

    while (i <= zakres)
    {
        cout << i << ") " << rand()%(zakres + 1) << endl;
        i++;
    }

    return 0;
}
