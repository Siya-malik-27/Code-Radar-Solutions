#include <stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(a,b,c){
        case '+':
        printf("%d",a+b);
    }
    return 0;
}