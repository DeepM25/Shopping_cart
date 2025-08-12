#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    
    
    char food[20] = "";
    float price = 0.00;
    int item_number = 0;
    printf("What item would you like to buy?: ");
    fgets(food,20,stdin);
    food[(strlen(food))-1] = '\0';
    printf("Price of item would be Rupees: ");
    scanf("%f",&price);
    printf("How many would you like?: ");
    scanf("%d",&item_number);
    printf("you have bought %d %s\n",item_number,food);
    food[(strlen(food))-1] = '\0';
    float total = price * item_number;
    printf("The total is Rupees %.2f\n",total);
    return 0;

    


}
