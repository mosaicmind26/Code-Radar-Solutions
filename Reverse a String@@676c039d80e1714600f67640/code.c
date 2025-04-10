#include<stdio.h>
#include<string.h>
int main(){
    char a[78];
    scanf("%s",&a);
    char word[78];
    int l =strlen(a);
    for(int i=(l-1);i>=0;i--){
        printf("%c",a[i]);
    }
    return 0;
}