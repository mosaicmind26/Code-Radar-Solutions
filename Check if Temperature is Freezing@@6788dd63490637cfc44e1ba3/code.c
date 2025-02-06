#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a;
    scanf("%d",&a):
    if ((a==0)||(a<0)){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}