#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char letter;
    scanf("%c",&letter);
    if (isupper(letter)){
        printf("Uppercase",letter);
    }
    else if (islower(letter)){
        printf("Lowercase",letter);
    }
    else {
        printf("Not an alphabet",letter);
    }
    return 0;
}