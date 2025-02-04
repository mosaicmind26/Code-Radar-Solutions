#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char word[];
    scanf("%s",&word);
    printf("You entered: %s",word);
    return 0;
}