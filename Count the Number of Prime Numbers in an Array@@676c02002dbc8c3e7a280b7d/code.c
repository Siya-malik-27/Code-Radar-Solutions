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
        int prime=1;
        int num=arr[i];
        if (num < 2) {
            prime = 0;  
        } else {
            for (int x= 2; x < num; x++) {  
                if (num % x == 0) {
                    prime = 0;  
                    break;
                }
            }
        }
        if (prime) {
            count++;
        }
        
    }
    
    printf("%d",count);
}