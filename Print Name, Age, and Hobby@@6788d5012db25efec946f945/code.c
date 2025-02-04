#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char name[67];
    int age;
    char favourite_hobby[90];
    scanf("%s %d %s",&name,&age,&favourite_hobby);
    //printf("Name: %s",name);
    //printf("Age: %d",age);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",favourite_hobby);
    return 0;
}