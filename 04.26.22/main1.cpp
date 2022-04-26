#include <iostream>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int n = 101;
    int tab[n];

    std::fill(tab, tab + n, 1);

    // for (unsigned int i = 0; i < n; i++) {
    //     std::cout << tab[i] << "\t";
    // }

    std::cout << std::endl
              << std::endl;

    /*-------------------*/
    int i = 2;

    for (unsigned int i = 2; i < n; i++) {
        for (unsigned int j = i + i; j < n; j += i) {
            if (tab[j] == 1)
                tab[j] = 0;
        }
    }

    /*-------------------*/

    for (unsigned int i = 0; i < n; i++) {
        if (tab[i])
            std::cout << i << "\t";
    }

    return 0;
}