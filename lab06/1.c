#include <stdio.h>

int main()
{
    int hours, minutes;
    char type[2];

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%2d:%2d %1c", &hours, &minutes, type);

    if (hours >= 12)
        hours -= 12;

    if (*type == 'p' || *type == 'P')
        hours += 12;

    printf("Equivalent 24-hour time: %02d:%02d", hours, minutes);
}