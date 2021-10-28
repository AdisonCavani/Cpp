#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    int a;
    cout << "Ile komandosow chcesz wypisac?\n";
    cin >> a;

    for (int i = 0; i <= a; i++)
    {
        cout << i << " komandos skacze" << endl;
        cout << "\033[2J"
             << "\033[1;1H";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}