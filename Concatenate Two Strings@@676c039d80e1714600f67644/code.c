#include<stdio.h>
#include<string.h>
int main(){
    char a[67];
    char b[88];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
    strcat(a,b);
    printf("%s",a);
    return 0;
}