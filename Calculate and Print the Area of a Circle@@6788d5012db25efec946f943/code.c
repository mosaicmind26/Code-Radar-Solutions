#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    float radius;
    scanf("%f",&radius);
    //printf("Area: %.2f",((3.14*((radius)**2))));
    printf("Area: %.2f",(3.14*radius*radius));
    return 0;
}