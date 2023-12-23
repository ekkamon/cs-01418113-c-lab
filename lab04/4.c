#include <stdio.h>
#include <stdlib.h>

void printRhombus(int x, int y);
void printStar(int size);

int main()
{
    char input_x[10]; 
    char input_y[10];
    
    fgets(input_x, 10, stdin);
    fgets(input_y, 10, stdin);
    
    int x = atoi(input_x), y = atoi(input_y);

    printRhombus(x, y);
}

void printRhombus(int x, int y)
{
    for(int i = 0; i < y; ++i)
    {
        printf("%*s", i, "");
        if (i == 0 || i == y-1)
        {
            printStar(x);
        } else {
            printf("*");
            printf("%*s", x - 2, "");
            printf("*");
        }

        printf("\n");
    }
}

void printStar(int size) {
    for (int i = 0; i < size; ++i) printf("*");
}