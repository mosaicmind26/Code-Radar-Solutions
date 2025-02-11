#include <stdio.h>
#include<ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char letter;
    scanf("%c %d",&letter);
    if (isalpha(letter)){
        if ((letter=='a'||letter=='A')||(letter=='e'||letter=='E')||(letter=='i'||letter=='I')||(letter=='o'||letter=='O')||(letter=='u'||letter=='U')){
            printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    else if (isdigit(letter)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}  

