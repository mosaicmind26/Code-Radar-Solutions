#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i=1; i<=10;i++){
        int a=1;
        a= N*i;
        printf("%d x %d = %d\n",N,i,a);
    }
    return 0;
}