#include <stdio.h>
#include <stdlib.h>


int main()
{
    char input_goal[100];
    
    printf("Enter your goal amount: ");
    fgets(input_goal, 100, stdin);

    double goal = atof(input_goal), balance = 0.0;
    int day = 0;

    while (balance < goal)
    {
        char input_money[100];

        printf("Enter money collected today: ");
        fgets(input_money, 100, stdin);

        double money = atof(input_money);

        if (money <= 0) continue;

        day++; balance += money;
        
        if (balance < goal)
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, balance, goal - balance);
    }

    printf("Congratulations! You take %d %s to reach your goal.", day, day > 1 ? "days" : "day");
}