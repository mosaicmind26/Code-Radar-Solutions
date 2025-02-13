// Your code here...
#include<stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
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
    else if (c=='/'){
        if(b==0){
            printf("invalid");
        }
        else{
        
        int g=(a/b);
        printf("%d",g);

        }
    }
    else{
        printf("Invalid");
    }
    return 0;
}