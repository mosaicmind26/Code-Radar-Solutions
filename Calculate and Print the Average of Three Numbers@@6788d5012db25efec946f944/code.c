#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Average: %.2lf",((a+b+c)/3.0));
    return 0;
}