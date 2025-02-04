#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    double number;
    scanf("%lf",&number);
    //printf("You entered: %.4lf",number);
    printf("You entered: %.4f",number);
    return 0;
}