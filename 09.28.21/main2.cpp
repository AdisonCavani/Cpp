#include <iostream>
using namespace std;


int main()
{
    int x;

    cout << "Podaj x: ";
    cin >> x;

    if(x % 2 == 0){
        cout << x << " jest liczba parzysta";
    }
    else{
        cout << x << " jest liczba nie parzysta";
    }

    return 0;
}
