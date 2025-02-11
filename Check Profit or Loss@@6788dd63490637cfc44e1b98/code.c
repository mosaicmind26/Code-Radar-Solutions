#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int cost price , selling price;
    scanf("%d %d",&cost price,&selliing price );
    if (cost price<selling price){
        printf("Profit");
    }
    else if(cost price>selliing price){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}