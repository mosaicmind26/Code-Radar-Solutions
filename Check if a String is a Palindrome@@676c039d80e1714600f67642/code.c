#include<stdio.h>
#include<string.h>
int main(){
    char a[78];
    scanf("%s",a);
    char b[78];
    int l= strlen(a);
    for(int i=(l-1);i>0;i--){
        b =strcat(b,a[i]);
        if(a==b){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}