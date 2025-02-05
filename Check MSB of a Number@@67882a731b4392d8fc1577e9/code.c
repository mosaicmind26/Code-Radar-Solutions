#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int num;
    int bit_size = sizeof(int)*8;
    scanf("%d",&num);
    int MSB_check = 1 << (bit_size-1);
    if (num & MSB_check){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}