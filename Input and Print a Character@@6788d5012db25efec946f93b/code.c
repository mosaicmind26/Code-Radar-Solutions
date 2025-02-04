#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char letter;
    printf("%s", welcome());
    scanf("%c",&letter);
    printf("You entered: %c",letter)

    return 0;
}