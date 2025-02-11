#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char letter;
    scanf(%c,&letter);
    letter= isupper(letter); 
    if (letter==A){
        printf("Excellent");
    }
    else if (letter==B){
        printf("Good");
    }
    else if(letter==C){
        printf("Average");
    }
    else if(letter==D){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}