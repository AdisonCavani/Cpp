#include <fstream>
#include <iostream>

using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
}

void decToBin(int n) {
    if (n / 2 != 0) {
        decToBin(n / 2);
    }
    cout << n % 2;
}

int sum(int n) {
    int suma = 0;

    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }

    return suma;
}

int main() {
    fstream plik;
    plik.open("dec.txt", ios::in);

    int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {
        plik >> arr[i];
    }
    plik.close();

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " = ";
        decToBin(arr[i]);
        cout << endl;
    }

    // Liczenie sumy cyfr liczby
    cout << endl
         << "Suma cyfr liczby: " << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " = ";
        sum(arr[i]);
        cout << endl;
    }

    return 0;
}