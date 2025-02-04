#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char name[];
    int age;
    char favourite_hobby[];
    scanf("%c %d %c",&name,&age,&favourite_hobby);
    printf("Name: %c",name);
    printf("Age: %d",age);
    printf("Hobby: %c",favourite_hobby);
    return 0;
}