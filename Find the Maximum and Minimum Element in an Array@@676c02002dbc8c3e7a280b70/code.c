// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int num=arr[i];
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    }
    printf("%d %d",max,min);
}