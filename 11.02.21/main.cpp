#include <iostream>
using namespace std;

float Fahrenheit(int temp);
float Kelvin(int temp);
float Reaumur(int temp);

int main()
{
    int temp;

    cout << "Podaj temperature w stopniach Celcjusza: ";
    cin >> temp;
    cout << "Fahrenheit: " << Fahrenheit(temp) << endl;
    cout << "Kelvin: " << Kelvin(temp) << endl;
    cout << "Reaumur: " << Reaumur(temp) << endl;

    return 0;
}

float Fahrenheit(int temp) { return temp * 1.8 + 32; }
float Kelvin(int temp) { return temp + 273.15; }
float Reaumur(int temp) { return temp * 4 / 5; }
