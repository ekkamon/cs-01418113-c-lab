#include <stdio.h>

int main()
{
    int computer_time = 1678;
    int days = computer_time / (24 * 60);
    int hours = computer_time % (24 * 60) / 60;
    int minutes = computer_time % (24 * 60) % 60;

    printf("It is %d days %d hours and %d minutes.", days, hours, minutes);
    
    return 0;
}