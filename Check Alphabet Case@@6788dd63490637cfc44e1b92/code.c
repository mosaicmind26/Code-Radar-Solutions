#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char a;
    scanf("%s",&a);
    if (isupper(a)){
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
    return 0;
}