#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    double number;
    scanf("%lf",&number);
    print("You entered: %.4lf",number);
    return 0;
}