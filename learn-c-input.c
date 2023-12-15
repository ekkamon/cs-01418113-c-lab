#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[20];
    fgets(str, 20, stdin);

    int i = atoi(str);
    double f = atof(str);
    long l = atol(str);
    char c = getchar();

    int isExist = 1; // true
    char isDigit[] = ""; // true
    // false -> 0 0.0 '\0'

    // relational operator
    // > >= <= == != --> 0 / 1

    // logical operator
    // && || !

    printf("%s %c\n", str, c);
}