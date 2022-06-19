#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Podaj ilosc: ";
    cin >> size;

    int *bin = new int(size);

    cout << "Podaj " << size << " elementow:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> bin[i];
    }

    int j = 0, k = 0, liczba = 0;
    for (int i = 0; i < size; i++) {
        j = 1;
        k = i + 1;

        for (; k < size;) {
            j *= 2;
            k++;
        }
        liczba += bin[i] * j;
    }

    cout << "Liczba wynosi: " << liczba << endl;

    return 0;
}