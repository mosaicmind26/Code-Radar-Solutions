// Your code here...
#include <stdio.h>

int main() {
    int a,c;
    scanf("%d",&a);
    for (int i=2;i<a;i++){
        if ((a%i)==0){
            c++;
        }
    }
    if (c==0){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}