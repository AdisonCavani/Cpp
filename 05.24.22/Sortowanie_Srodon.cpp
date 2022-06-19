// Adrian Środoń 3IB
#include <fstream>
#include <iostream>

using namespace std;

void printArr(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << endl;
}

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

int main() {
    fstream file;
    file.open("przyklad.txt", ios::in);

    int arr[200];
    for (int i = 0; !file.eof(); i++)
        file >> arr[i];
    file.close();

    printArr(arr, sizeof(arr) / sizeof(arr[0]));

    sortArr(arr, sizeof(arr) / sizeof(arr[0]));

    cout << endl
         << "Posortowana tablica:" << endl;

    printArr(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}