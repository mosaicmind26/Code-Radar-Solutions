// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %c",&a,&b,&c);
    if (c=='+'){
        int d= (a+b);
        printf("%d",d);
    }
    else if(c=='-'){
        int e= (a-b);
        printf("%d",e);
    }
    else if(c=='*'){
        int f=(a*b);
        printf("%d",f);
    }
    else{
        int g=(a/b);
        printf("%d",g);
    }
    return 0;
}