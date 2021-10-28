#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    int t;
    cout << "Podaj czas do dzwonka: ";
    cin >> t;

    for (int i = t; i >= 0; i--)
    {
        cout << "Pozostalo " << i << " min do dzwonka\n";
        cout << "\033[2J"
             << "\033[1;1H";
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    return 0;
}