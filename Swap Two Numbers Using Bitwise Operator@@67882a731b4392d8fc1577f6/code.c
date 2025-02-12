// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a!=b){
        *a=*a^*b;
        *b=*a^*b;
        printf("%d %d",*a,*b);
        
    }
}