#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int tabela = 10, k = 1, zakres = 100;
    srand(time(NULL))

    for (int i = 1; i <= tabela; i++)
    {
        for (int j = 1; j <= tabela; j++)
        {
            if (j == k)
                cout << "*\t";
            else
                cout << rand()%(zakres+1) << "\t";
        }

        k++;
        cout << endl;
    }
    
    return 0;
}
