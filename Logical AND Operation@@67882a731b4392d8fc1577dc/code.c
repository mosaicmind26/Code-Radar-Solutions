#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>0&&b>0){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}