#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("%d",(a>>31)&1);
    return 0;
}