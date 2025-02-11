#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char letter;
    scanf("%c",&letter);
    if (isupper(letter)) {
        printf("Uppercase");
    }
    else if (islower(letter)) {
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}