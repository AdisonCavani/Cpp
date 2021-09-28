#include <iostream>
using namespace std;


int main()
{
    string login,passwd;
    
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj hasło: ";
    cin >> passwd;
    
    if (login == "admin" && passwd == "0123")
        cout << "Zalogowano pomyślnie";
        
    else
        cout << "Niepoprawne hasło lub login";

    return 0;
}