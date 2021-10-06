// Objętość kuli
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int r;

    cout << "Podaj r: \n";
    cin >> r;

    cout << fixed << setprecision(5) << "Obwod kuli wynosi: " << (4.0 / 3) * M_PI * pow(r, 3);
    return 0;
}
