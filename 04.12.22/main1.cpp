#include <cmath>
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

void search(int arr[], int size, int szuk);

int main() {
    const int n = 100;
    int arr[n + 1];

    fstream plik;
    plik.open("lista100_t.txt", ios::in);

    if (!plik) {
        cout << "Problem z plikiem!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        plik >> arr[i];
    }
    plik.close();

    int szuk;
    cout << "Podaj szukana wartosc: ";
    cin >> szuk;
    arr[n] = 122;
    search(arr, n, szuk);

    return 0;
}

void search(int arr[], int size, int szuk) {
    for (int i = 0; i <= size; i++) {
        if (arr[i] == szuk && i < size) {
            cout << "Znaleziono! Index: " << i << endl;
            return;
        }
    }

    cout << "Nie znaleziono!" << endl;
}