#include<stdio.h>
#include<string.h>
int main(){
    char a[90];
    scanf("%s",&a);
    int count=0;
    int l= strlen(a);
    for(int i=0;i<l;i++){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i='u'){
            count=count+1;
        }
        else{
            count=count+0;
        }
        printf("%d",count);
    }
    return 0;
}