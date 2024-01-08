#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int width = 1, middle = n;
    for(int i = 1; i <= (n * 2); ++i)
    {
        for(int x = 0; x < width; ++x) printf(x % 2 == 0 ? "-" : "x");
        if (i < middle) width++; else width--;
        printf("\n");
    }
}