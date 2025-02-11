#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int grade;
    scanf("%d",&grade);
    if (grade>=90){
        printf("A");
    }
    else if((grade>=80)&&(grade<90)){
        printf("B");
    }
    else if((grade>=70)&&(grade<80)){
        printf("C");
    }
    else if((grade>=60)&&(grade<70)){
        printf("D");
    }
    else {
        printf("F");
    }
    //printf("%s", welcome());
    return 0;
}