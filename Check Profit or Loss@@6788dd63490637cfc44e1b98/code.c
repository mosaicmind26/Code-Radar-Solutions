#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int cost_price , selling_price;
    scanf("%d %d",&cost_price,&selling_price);
    if (cost_price < selling_price){
        printf("Profit");
    }
    else if(cost_price > selling_price){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}