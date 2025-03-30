// Your code here...
#include <stdio.h>
int main(){
    int size;
    int num,count;
    scanf("%d",&size);
    scanf("%d",&num);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            count++
        }
    }
    printf("%d",count);
    
    
}