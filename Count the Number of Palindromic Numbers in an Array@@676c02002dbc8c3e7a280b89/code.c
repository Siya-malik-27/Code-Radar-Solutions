// Your code here...
#include <stdio.h>
int main(){
    int count;
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int r,reverse=0;
        int num=arr[i];
        while(num>0){
            r=num%10;
            reverse=(reverse*10)+r;  
            num=num/10;    
        }
        if(arr[i]==reverse){
            count++;
        }
    }
    printf("%d",count);
}