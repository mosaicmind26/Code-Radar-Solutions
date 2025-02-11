#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char letter;
    scanf("%c",&letter);
    if (letter=='A'){
        printf("Excellent");
    }
    else if (letter=='B'){
        printf("Good");
    }
    else if (letter=='C'){
        printf("Average");
    }
    else if (letter=='D'){
        printf("Below Average");
    }
    else if(letter=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}