#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int age;
    scanf("%d",age);
    if (age<60){
        printf("Not Eligible");
    }
    else {
        printf("Eligible");
    }
    return 0;
}