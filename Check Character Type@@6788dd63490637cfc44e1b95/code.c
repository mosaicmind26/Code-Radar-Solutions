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
        if ((letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u')){
            printf("Vowel");
        }
        else if ((letter!='a')||(letter!='e')||(letter!='i')||(letter!='o')||(letter!='u')){
            printf("Consonant");
        }
    }
    else if (isdigit(letter)){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}  

