#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long convert(int num);

int main()
{
    char input[255]; fgets(input, 255, stdin);
    int num = atoi(input);

    printf("%ld", convert(num));
}

int time = 0; long bits = 0;
long convert(int num)
{
    bits += (num & 1) * (long)pow(10, time);
    time++;

    return num << 1 ? convert(num / 2) : bits;
}