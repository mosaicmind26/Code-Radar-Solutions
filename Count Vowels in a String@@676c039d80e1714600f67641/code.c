#include<stdio.h>
#include<string.h>
int main(){
    char a[90];
    scanf("%s",a);
    int count=0;
    int l= strlen(a);
    for(int i=0;i<l;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            count=count+1;
        }
    
    }
    printd("%d",count);
    return 0;
}