#include <stdio.h>
#include <stdlib.h>

int main() {
    char a_str[10], b_str[10];

    fgets(a_str, 10, stdin);
    fgets(b_str, 10, stdin);

    int a = atoi(a_str), b = atoi(b_str);

    for (int i = 10000; i != 1; --i) {
        if (a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
        }
    }


    if (b > 1)
        printf("= %d/%d", a, b);
    else
        printf("= %d", a);

    return 0;

}