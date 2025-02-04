#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    float radius;
    scanf("%lf",&radius);
    printf("Area: %.2lf"((3.14*(radius)**2)));
    return 0;
}