#include <stdio.h>

int isprime(int n) {
    if (n < 2) 
        return 0;

    for (int x = 2; x< n; x++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i<= t; i++) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isprime(num));
    }

    return 0;
}
