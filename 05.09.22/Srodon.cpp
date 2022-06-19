// Adrian Środoń 3IB
// Losowanie elementów tablicy o rozmiarze 10
// Sortowanie tablicy
// Zapis posortowanej tablicy do pliku
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

void sortArr(int arr[], int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        bool swap = false;
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tempArr = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempArr;
                swap = true;
            }
        }
        if (!swap)
            break;
    }
}

void printArr(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << endl;
}

int main() {
    int size = 10;
    int a = 0, b = 100;
    int tab[size];

    srand(time(NULL));

    for (int i = 0; i < size; i++)
        tab[i] = rand() % (b - a + 1);

    cout << "Wylosowano elementy tablicy:" << endl;
    printArr(tab, size);

    sortArr(tab, size);
    cout << "\nPosortowano elementy tablicy:" << endl;
    printArr(tab, size);

    fstream file;
    file.open("liczby.text", ios::out);

    for (int i = 0; i < size; i++)
        file << tab[i] << endl;

    file.close();

    return 0;
}