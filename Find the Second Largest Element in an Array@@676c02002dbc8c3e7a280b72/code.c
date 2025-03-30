// Your code here...
#include <stdio.h>
int main(){
    int n,flag;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],smax=arr[0];
    for(int i=0;i<n;i++){
        int num=arr[i];
        if(num>max){
            smax=max;
            max=num;
        }
        else if(smax<max && num!=max){
            smax=num;
            flag=1;
        }
        }
    
    if(flag){
        printf("%d",smax);
    }   
    else{
        printf("-1");
    }
}