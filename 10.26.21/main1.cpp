#include <iostream>
using namespace std;

int main()
{
    int a = 150,
        x = 25,
        r;

    srand(time(NULL));

    cout << "i\tr\n";
    cout << "----------\n";

    for (int i = 1; i <= x; i++)
    {
        r = rand() % (a + 1);
        cout << i << "\t" << r << endl;
    }
    
    return 0;
}
