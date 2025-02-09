#include <stdio.h>
int isprime(int n);
int isprime(int n){
    if (n == 0 || n == 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
            }
        }
    }

    if (prime)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
int main() {
    int t,prime;
    scanf("%d",&t);
    for(int i=i;i<=t;i++){
        int num;
        scanf("%d",&num);
        printf("%d",isprime(num));
    }
    return 0;
}