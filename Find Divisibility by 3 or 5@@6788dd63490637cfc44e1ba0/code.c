#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a,rem_3,rem_5;
    scanf("%d",&a);
    rem_3=a%3;
    rem_5=a%5;
    if ((rem_5==0)&&(rem_3==0)){
        printf("Divisible by Both");
    }
    else if (rem_3==0){
        printf("Divisible by 3");
    }
    else if (rem_5==0){
        printf("Divisible by 5");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}