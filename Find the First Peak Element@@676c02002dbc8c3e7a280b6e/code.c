// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peak,flag;
    for(int i=0;i<n;i++){
        int num=arr[i+1];
        if(num>arr[i]&& num>arr[i+2]){
            flag=1;
            peak=num;
            break;
        }
    }
    if(flag){
        printf("%d",peak);
    }
    else{
        printf("-1");
    }
}