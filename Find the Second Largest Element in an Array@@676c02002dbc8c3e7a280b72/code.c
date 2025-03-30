// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],smax=arr[0];
    for(int i=0;i<n;i++){
        int num=arr[i];
        if(num>max){
            max=num;
        }
        if(num<max && num!=max){
            smax=num;
        }
        }
    
        
    printf("%d",smax);
}