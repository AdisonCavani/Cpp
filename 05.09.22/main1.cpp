#include <iostream>

using namespace std;

void sortArr(int arr[], int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        bool swap = false;
        cout << "Iteracja" << endl;
        for (int j = 0; j < arrSize - i - 1; j++) {
            cout << "Iteracja2" << endl;
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
    int tab[5] = {7, 3, 0, 1, 5};

    printArr(tab, 5);
    sortArr(tab, 5);

    cout << "Posortowana tablica:" << endl;
    printArr(tab, 5);

    return 0;
}