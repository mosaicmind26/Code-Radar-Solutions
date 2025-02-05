#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    //printf("%s", welcome());
    int num;
    scanf("%d",&num);
    if (num & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}