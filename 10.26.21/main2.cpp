#include <iostream>
using namespace std;

int main()
{
    int k = 10, w = 10, a = 99;
    srand(time(NULL));

    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j == i)
                cout << "*\t";

            else
                cout << rand() % (a + 1) << "\t";
        }
        cout << endl;
    }

    return 0;
}