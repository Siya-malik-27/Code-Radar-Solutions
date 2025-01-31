#include <stdio.h>

int main() {
    int num,position;
    scanf("%d",&num);
    while((num&1)==0){
        num=num>>1;
        position++;
    }
    printf("%d",position);
    return 0;
}