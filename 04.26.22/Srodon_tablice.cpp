// Adrian Środoń 3IB
// Program wypelnia tablice 20 losowymi liczbami z przedzialu 0 - 100
// Nastepnie sprawdza, ktore elementy tablicy sa parzyste i je wypisuje

#include <iostream>
#include <stdlib.h>

using namespace std;

void printEvenNumbersInArray(int array[], int arrSize) {
    // Sprawdz liczby parzyste
    for (unsigned int i = 0; i < arrSize; i++) {
        if (array[i] % 2 == 0)
            cout << array[i] << endl;
    }
}

int main() {
    int size = 20;
    int tab[size];

    srand(time(NULL));

    cout << "Wylosowano liczby: " << endl;

    // Wypelnij tablice
    for (unsigned int i = 0; i < size; i++) {
        tab[i] = rand() % (101); // Przedzial 0 - 100
        cout << tab[i] << endl;
    }

    cout << endl
         << "Znaleziono liczby parzyste: " << endl;
    printEvenNumbersInArray(tab, size);

    return 0;
}
