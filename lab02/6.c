#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[4];
    fgets(input, 4, stdin);

    int ch  = input[0];

    if (ch >= 'a' && ch <= 'z') {
        printf("Output: lower case");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Output: upper case");
    } else if (ch >= '0' && ch <= '9') {
        printf("Output: digit");
    } else {
        printf("Output: others %d", ch);
    }

    return 0;
}