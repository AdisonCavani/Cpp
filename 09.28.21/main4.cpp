#include <iostream>
using namespace std;


int main()
{
    int a;
    string miesiac[12] = {"Styczen", "Luty", "Marzec", "Kwiecien", "Maj", "Czerwiec", "Lipiec", "Sierpien", "Wrzesien", "Pazdziernik", "Listopad", "Grudzien"};
    
    cout << "Podaj liczbę miesiąca: ";
    cin >> a;
    
    if (a >= 1 && a <= 12)
        cout << miesiac[a - 1];
    else
        cout << "Liczba spoza zakresu";

    return 0;
}