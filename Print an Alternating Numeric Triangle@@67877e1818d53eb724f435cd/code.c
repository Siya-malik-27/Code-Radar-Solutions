#include <stdio.h>

int main() {
    int n,num;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            num=0;
        }
        else{
            num=1;
        }
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            if(num==0){
                num=1;
            }
            else{
                num=0;
            }
        }
        printf("\n");
    }
    return 0;
}