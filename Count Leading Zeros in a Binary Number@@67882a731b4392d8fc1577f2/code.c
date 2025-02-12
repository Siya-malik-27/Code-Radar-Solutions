#include <stdio.h>

int main() {
    int a,count=0,b;
    scanf("%d",&a);
    b=1<<31;
    while((a&b)==0 &&count<31){
        a=a<<1;
        count++;
    }
    printf("%d",count);
    return 0;
}