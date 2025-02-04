#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int num;
    scanf("%d",&num);
    //printf("%d",sum);
    printf("You entered: %d",num);
    return 0;
}