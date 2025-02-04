#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char letter;
    scanf("%c",&letter);
    printf("ASCII Value: %d",letter);
    return 0;
}