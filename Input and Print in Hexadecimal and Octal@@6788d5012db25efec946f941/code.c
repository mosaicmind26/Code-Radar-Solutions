#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int integer;
    scanf("%d",&integer);
    printf("Hexadecimal: %X",integer);
    printf("Octal: %o",integer);
    return 0;
}