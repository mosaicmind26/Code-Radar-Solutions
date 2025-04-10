#include<stdio.h>
#include<string.h>
int main(){
    char a[67];
    char b[88];
    scanf("%s \n %s",a,b);
    char word[89]= strcat(a,b);
    printf("%s",word);
    return 0;
}