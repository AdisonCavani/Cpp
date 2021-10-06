#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj a, b i c:\n";
    cin >> a >> b >> c;
    cout << sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));

    return 0;
}