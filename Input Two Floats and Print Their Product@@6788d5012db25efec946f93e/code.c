#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    float first, second;
    scanf("%f %f",&first ,&second);
    //printf("Product: %f"(1st*2nd));
    printf("Product: %.2f",(first*second));
    return 0;
}