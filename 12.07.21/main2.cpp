#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int x, k = 1, min, max, sum;
    float avg;
    string linia;
    fstream plik;

    plik.open("dane_100.txt", ios::in);
    plik >> min;
    max = min;
    sum = min;
    while (!plik.eof())
    {
        plik >> x;

        sum += x;
        k++;

        if (min > x)
        {
            min = x;
        }
        if (max < x)
        {
            max = x;
        }
    }

    avg = (float)sum / k;

    cout << "Minimum wynosi: " << min << endl;
    cout << "Maximum wynosi: " << max << endl;
    cout << "Średnia wynosi: " << setprecision(3) << fixed << avg << endl;
    cout << "Suma wynosi: " << sum << endl;

    return 0;
}