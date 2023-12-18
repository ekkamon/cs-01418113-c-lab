#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    fgets(input, 100, stdin);

    int num = atoi(input);
    for (int i = num; i >= 0; --i) printf("%d\n", i);
    
    return 0;
}