#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_n[10]; fgets(input_n, 10, stdin);
    int n = atoi(input_n);

    int count = 1, size = (2 * n) - 1;

    for (int i = 0; i < (2 * n) - 1; i++) {
        for(int x = 0; x < count; x++)
        {
            printf("*");
        }

        printf("\n");
        if (i + 1 < n) count++; else count--;
    }
}