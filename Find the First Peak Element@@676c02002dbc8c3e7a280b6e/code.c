// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peak;
    for(int i=0;i<n;i++){
        int num=arr[i+1];
        if(num>arr[i]&& num>arr[i+2]){
            peak=num;
        }
    }
    printf("%d",peak);
}