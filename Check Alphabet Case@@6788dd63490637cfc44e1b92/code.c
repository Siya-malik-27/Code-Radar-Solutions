#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>=70 && ch<=96){
        printf("Uppercase");
    }
    else if(ch>=97 && ch<=122 ){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}