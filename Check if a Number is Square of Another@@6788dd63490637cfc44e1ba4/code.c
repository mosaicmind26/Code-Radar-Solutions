#include <stdio.h>
#include<math.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int a,b;
    scanf("%d %d",&a,&b);
    if ((pow(a))==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}