// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if (isupper(a) =='R'){
        printf("Stop");
    }
    if else (isupper(a) =='G'){
        printf("Go");
    }
    else{
        printf("Slow Down");
    }
    return 0;
}