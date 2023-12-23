#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[3]; fgets(input, 3, stdin);
    int size = atoi(input);

    if (size <= 0 || size > 26) {
        printf("-");
        return 0;
    }

    int total = (size * 4) - 3;
    int middle = total / 2;
    int ch = 'a' + size - 1;
    
    for (int i = 0; i < total; i++) {
        if (i % 2 == 0) {
            printf("%c", ch);
            
            if (i == middle) {
                ch = 'a' + 1;
            }else if (i > middle) {
                ch++;
            } else {
                ch--;
            }
        } else {
            printf("-");
        }
    }
    
    return 0;
}