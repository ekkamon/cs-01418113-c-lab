#include <stdio.h>
#include <stdlib.h>

void printInfo(int size, char start);
int printWidth(int dataWidth, int maxWidth);

int main()
{
    char input[3]; fgets(input, 3, stdin);
    int size = atoi(input);

    if (size <= 0 || size > 26) {
        printf("-");
        return 0;
    }

    int boxLine = (size * 2) - 1;
    int total = (size * 4) - 3;
    int middle = boxLine / 2;
    int ch = 'a' + size - 1;
    int count = 1;

    for(int i = 0; i < boxLine; ++i) {
        int chWidth = (count * 4) - 3;

        printWidth(chWidth, total);
        printInfo(count, ch);
        printWidth(chWidth, total);
        printf("\n");

        if (i + 1 == middle) {
            count = size;
            ch = 'a';
        } else if (i < middle) {
            count++;
            ch--;
        } else {
            count--;
            ch++;
        }

    }
}

void printInfo(int size, char start)
{
    int total = (size * 4) - 3;
    int middle = total / 2;
    int ch = start + size - 1;
    
    for (int i = 0; i < total; i++) {
        if (i % 2 == 0) {
            printf("%c", ch);
            
            if (i == middle) {
                ch = start + 1;
            }else if (i > middle) {
                ch++;
            } else {
                ch--;
            }
        } else {
            printf("-");
        }
    }
}

int printWidth(int dataWidth, int maxWidth)
{
    for(int i = 0; i < (maxWidth - dataWidth) / 2; ++i) printf("-");
}