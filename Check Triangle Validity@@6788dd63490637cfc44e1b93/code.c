#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (((a+b)>c)&&((b+c)>a)&&((c+a)>b)) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
    return 0;
}