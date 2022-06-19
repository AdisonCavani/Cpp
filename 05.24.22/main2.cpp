#include <fstream>
#include <iostream>

using namespace std;

bool check(int number) {
    int first = number % 10, last = 0;

    while (number > 0) {
        if (number < 10)
            last = number % 10;
        number /= 10;
    }

    if (first == last)
        return true;
    return false;
}

int main() {
    fstream file;
    file.open("przyklad.txt", ios::in);

    int arr[200];
    for (int i = 0; !file.eof(); i++)
        file >> arr[i];
    file.close();

    int ilosc = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i];

        if (check(arr[i])) {
            cout << " = TAK" << endl;
            ilosc++;
        } else {
            cout << " = NIE" << endl;
        }
    }

    cout << endl
         << "Ilosc: " << ilosc << endl;

    return 0;
}