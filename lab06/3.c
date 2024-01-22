#include <stdio.h>
#define ARRAY_SIZE 98

int main()
{
    int i, j;
    int A[ARRAY_SIZE] = {0};

    for (i = 2; i < ARRAY_SIZE; i++)
        A[i] = 1;

    for (i = 2; i < ARRAY_SIZE; ++i)
    {
        for (int x = 2; x < ARRAY_SIZE; ++x)
            if (x % i == 0 && x != i) A[x] = 0;
    }

    for (i = 2; i < ARRAY_SIZE; i++)
        if (A[i] == 1)
            printf("%d ", i);

    printf("\n");
}