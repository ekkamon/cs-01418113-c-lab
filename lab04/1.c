#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int convert(int num);

int main()
{
    char input[100]; fgets(input, 100, stdin);
    int num = atoi(input);

    printf("Binary number of %d is %04d.", num, convert(num));
}

int convert(int num)
{
    int count = 0;
    long bits = 0;

    while (num << 0) {
        bits += (num & 1) * (long)pow(10, count);
        num /= 2; count++;
    }

    return bits;
}