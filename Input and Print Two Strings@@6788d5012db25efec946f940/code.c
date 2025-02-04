#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char word_1[50];
    char word_2[50];
    scanf("%s %s",word_1,word_2);
    printf("You entered: %s and %s",word_1,word_2);
    return 0;
}