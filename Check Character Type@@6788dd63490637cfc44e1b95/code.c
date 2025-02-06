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
        if ((letter=='a'||'A')||(letter=='e'||'E')||(letter=='i'||'I')||(letter=='o'||'O')||(letter=='u'||'U')){
            printf("Vowel");
        }
        else if ((letter!='a'||'A')||(letter!='e'||'E')||(letter!='i'||'I')||(letter!='o'||'O')||(letter!='u'||U)||(isupper(lower))){
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

