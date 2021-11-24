// Funkcje - Adrian Środoń
#include <iostream>
using namespace std;

float trojkat(int a, int h);
int prostokat(int a, int b);
void kwadrat(int a);

int main() {
  string wybor;
  int a, b, opcja;

  do {
    cout << "Wybierz opcję:" << endl
         << "1. Pole trójkąta\n"
         << "2. Pole prostokąta\n"
         << "3. Pole kwadratu\n";
    cin >> opcja;
    switch (opcja) {
      case 1: {
        cout << "Podaj a oraz h: \n";
        cin >> a >> b;
        cout << "Pole trójkąta wynosi: " << trojkat(a, b) << endl;
        break;
      }
      case 2: {
        cout << "Podaj a oraz b: \n";
        cin >> a >> b;
        cout << "Pole prostokąta wynosi: " << prostokat(a, b) << endl;
        break;
      }
      case 3: {
        cout << "Podaj a: \n";
        cin >> a;
        cout << "Pole kwadratu wynosi: ";
        kwadrat(a);
        cout << endl;
        break;
      }
      default: {
        cout << "Zła opcja!\n";
        break;
      }
    }
    cout << "Chcesz powtórzyć? t\\n ";
    cin >> wybor;
  } while (wybor == "T" || wybor == "t");

  return 0;
}

float trojkat(int a, int h) { return (a * h) / 2; }
int prostokat(int a, int b) { return a * b; }
void kwadrat(int a) { cout << a * a; }