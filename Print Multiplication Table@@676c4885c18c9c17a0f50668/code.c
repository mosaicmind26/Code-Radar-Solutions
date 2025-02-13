// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i=1; i<=10;i++){
        int a=1;
        a=N*i;
        printf("2 x %d = %d\n",i,a);
    }
    return 0;
}