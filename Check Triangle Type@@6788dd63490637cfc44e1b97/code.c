#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a==b)&&(b==c)){
        printf("Equilateral");
    }
    if ((a==b)||(b==c)||(c==a)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}