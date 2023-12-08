#include<stdio.h>

// 2.0 = ((1.75 * 21) + (x * 18)) / (21 + 18)

int main()
{
    float preGrade = 1.50;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;

    printf("The GPA this semester should be %.2f", (float)((requiredGrade * (credit + preCredit)) - (preGrade * preCredit)) / credit);
    return 0;
}