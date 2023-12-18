#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char size_str[5], pepperoni_str[5], cheese_str[5], mushroom_str[5];

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str, 5, stdin);
   
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni_str, 5, stdin);

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str, 5, stdin);
   
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom_str, 5, stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int size = atoi(size_str), peperoni = atoi(pepperoni_str), cheese = atoi(cheese_str), mushroom = atoi(mushroom_str);
    double diameter, extraCost = 0.0, area = 0.0, price = 0.0;

    // pizza size
    switch (size)
    {
        case 1:
            diameter = 10.00;
            break;
        case 2:
            diameter = 16.00;
            break;
        case 3:
            diameter = 20.00;
    }

    // pizza area
    area = M_PI * (pow(diameter, 2) / 4.0);
    
    // extra topping
    if (peperoni == 1) extraCost += 0.50;
    if (cheese == 1) extraCost += 0.25;
    if (mushroom == 1) extraCost += 0.30;

    // total price
    price = 1.5 * (5.00 + (2.00 * area) + (extraCost * area));

    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.");
    return 0;
}