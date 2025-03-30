// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peak,flag=0;
    for(int i=1;i<n;i++){
        int num=arr[i];
        if(num>arr[i-1]&& num>arr[i+1]){
            
            peak=num;
            flag=1;
            break;
        }
        // Handle the last element (special case)
        if (n > 1 && arr[n - 1] > arr[n - 2] && !flag) {
        peak = arr[n - 1];
        flag = 1;
    }
    }
    if(flag){
        printf("%d",peak);
    }
    else{
        printf("-1");
    }
}