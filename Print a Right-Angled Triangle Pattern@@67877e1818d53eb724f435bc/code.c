// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=N; i>=1 ; i++){
        for(int j=i; j>1; j--){
            printf("*");
        }
    printf("/n");
    }
}