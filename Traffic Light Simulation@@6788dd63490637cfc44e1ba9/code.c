// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    a= isupper(a);
    if (a =='R'){
        printf("Stop");
    }
    if else (a =='G'){
        printf("Go");
    }
    else{
        printf("Slow Down");
    }
    return 0;
}