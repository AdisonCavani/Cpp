#include <fstream>
#include <iostream>

using namespace std;

int main() {
    fstream file;
    file.open("liczby.txt", ios::in);

    int arr[200];
    for (int i = 0; !file.eof(); i++)
        file >> arr[i];
    file.close();

    return 0;
}
