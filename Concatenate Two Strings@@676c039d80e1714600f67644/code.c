#include<stdio.h>
#include<string.h>
int main(){
    char a[67];
    char b[88];
    scanf("%s \n %s",a,b);
    strncat(a,b);
    printf("%s",a);
    return 0;
}