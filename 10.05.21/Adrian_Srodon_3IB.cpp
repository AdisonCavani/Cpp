// Adrian Środoń 3IB
// Losowanie 'n' liczb, znajdź minimum i maksimum

#include <iostream>
using namespace std;

int main()
{
    int a, b, n, min, max, curr;
    srand(time(NULL));

    cout << "Podaj ilosc liczb do wylosowania: ";
    cin >> n;
    cout << "Podaj zakres:\na: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    if (a > b)
    {
        cout << "A nie moze byc wieksze od B!";
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        curr = a + rand() % (b - a + 1);
        if (curr < min || i == 0)
            min = curr;
        if (curr > max || i == 0)
            max = curr;

        cout << curr << endl;
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max;

    return 0;
}