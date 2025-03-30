// Your code here...
#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);;
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int digit,sum,num;
        num=arr[i];
        while(num>0){
            digit=num%10;
            sum+=digit;
            num=num/10;
        }
        printf("%d ",sum);
    }
    
    
    
}