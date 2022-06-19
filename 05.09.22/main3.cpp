#include <iostream>
#include <stdio.h>

using namespace std;

void printArr(int arr[], int arrSize) {
    for (unsigned int i = 0; i < arrSize; i++)
        cout << arr[i] << endl;
}

int main() {
    int n = 0;

    cout << "Podaj ilosc elementow: ";
    cin >> n;

    int tab[n];

    for (unsigned int i = 0; i < n; i++)
        cin >> tab[i];

    cout << endl
         << "Wypisuje elementy tablicy:" << endl;
    printArr(tab, n);

    int k = 0;

    for (int i = 1; i < n; i++) {
        int pomoc = tab[i];
        k = i - 1;

        while (tab[k] > pomoc && k >= 0) {
            tab[k + 1] = tab[k];
            k = k - 1;
        }

        tab[k + 1] = pomoc;
    }

    cout << endl
         << tab[n] << endl;

    return 0;
}