// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    scanf("%d",&size);;
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int digit,sum=0,num;
        num=abs(arr[i]);
        while(num>0){
            digit=num%10;
            sum+=digit;
            num=num/10;
        }
        printf("%d ",sum);
    }
    
    
    
}