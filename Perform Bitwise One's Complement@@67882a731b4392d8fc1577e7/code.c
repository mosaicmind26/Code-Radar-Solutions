#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a;
    scanf("%d",&a);
    int result = ~a;
    printf("%d",result);
    return 0;
}