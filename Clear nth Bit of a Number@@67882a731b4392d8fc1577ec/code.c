#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a^(1<<b)); //^ operator because it converts 1 to 0
    return 0;
}