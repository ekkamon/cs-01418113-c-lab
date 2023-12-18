#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[3]; fgets(input, 3, stdin);
    int num = atoi(input);

    if (num <= 0 || num > 26) {
        printf("-");
        return 0;
    }

    for (int i = num; i > 0; --i) {
        printf("%c", 97 + i - 1);
        if (num != 1) printf("-");;
    }

    for (int i = 1; i <= num - 1; i++) {
        printf("%c", 97 + i);
        if (i != num - 1) printf("-");
    }
    
    return 0;
}