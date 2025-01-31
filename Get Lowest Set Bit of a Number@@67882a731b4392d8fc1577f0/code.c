#include <stdio.h>

int main() {
    int num,position;
    scanf("%d",&num);
    while((num&1)==0){ //until the lsb is 1 the loop is iterated
        num=num>>1;
        position++;
    }
    printf("%d",position);
    return 0;
}