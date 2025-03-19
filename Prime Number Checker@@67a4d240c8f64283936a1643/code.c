#include <stdio.h>

int isPrime(int n) {
    if (n < 2) 
        return 0;

    for (int x = 2; x< n; x++) {
        if (n % x== 0)
            return 0;
    }
    return 1;
}


