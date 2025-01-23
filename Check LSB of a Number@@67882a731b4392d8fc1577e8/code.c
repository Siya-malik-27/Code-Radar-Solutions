#include <stdio.h>
// lsb is checked using the rightmost digit in binary form
//it is 1 for odd number and 0 for even
//it is checked by using bitwise and with number eg for 5 0101& 0001=0001(1)
int main() {
    int a;
    scanf("%d",&a);
    if(a&1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}