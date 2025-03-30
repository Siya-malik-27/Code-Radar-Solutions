// Your code here...
#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0,index;
    int num;
    scanf("%d",&num);
    for(int i=0;i<size;i++){
        if(num==arr[i]){
            flag=1;
            index=i;
            break;
        }
    }
    if(flag){
        printf("%d",index);
    }
    else{
        printf("-1");
    }
}