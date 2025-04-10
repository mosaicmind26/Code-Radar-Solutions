#include<stdio.h>
#include<string.h>
int main(){
    char a[67];
    char b[88];
    scanf("%s",a);
    scanf("%s",b);
    strcat(a ,b);
    printf("%s",a);
    return 0;
}