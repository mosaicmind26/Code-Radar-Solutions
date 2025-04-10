#include<stdio.h>
#include<string.h>
int main(){
    char a;
    fgets(a,100,stdin);
    //char a[55];
    scanf("%s",a);
    int l = strlen(a);
    printf("%d",l);
    return 0;
}