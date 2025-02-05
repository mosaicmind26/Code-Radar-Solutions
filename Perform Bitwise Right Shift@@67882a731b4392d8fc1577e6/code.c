#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a,b;
    scanf("%d %d",&a,&b);
    int result = a>>b;
    printf("%d",result);
    return 0;
}