#include <iostream>
using namespace std;

int Potega(int p, int w);
void Silnia(int n);

int main()
{
    int wybor;
    cout << "Potegowanie czy silnia? 0/1\t";
    cin >> wybor;

    switch (wybor)
    {
    case 0:
        int p, w;
        cout << "Podaj podstawe: ";
        cin >> p;
        cout << "Podaj wykladnik: ";
        cin >> w;

        cout << "Potega wynosi: " << Potega(p, w) << endl;
        break;

    case 1:
        int n;
        cout << "Podaj liczbe do silni: ";
        cin >> n;
        cout << "Silnia wynosi: ";
        Silnia(n);
        break;

    default:
        cout << "Bledna opcja!";
        break;
    }

    return 0;
}

int Potega(int p, int w)
{
    int wynik = 1;

    for (int i = 1; i <= w; i++)
        wynik *= p;

    return wynik;
}

void Silnia(int n)
{
    int s = 1;

    for (int i = 1; i <= n; i++)
        s *= i;

    cout << s;
}