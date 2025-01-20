#include <stdio.h>

int main() {
    int age;
    char name[100];
    char hobby[100];
    scanf("%s %d",name,&age);
    scanf("%s",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}