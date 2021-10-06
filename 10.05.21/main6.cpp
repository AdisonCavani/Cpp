#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x = 9;
    cout << "Hello World!\n";

    if (x == (x + 1) / 3 * 3)
        cout << "Prawda";
    else
        cout << (x + 1) / 3 * 3;
    return 0;
}