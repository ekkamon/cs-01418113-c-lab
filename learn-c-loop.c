#include <stdio.h>

int main() {
    int i = 0;
    while (i < 20) {
        printf("while -> %d\n", i);
        i++;
    }

    for (int i = 0; i < 20; ++i) {
        printf("for -> %d\n", i);
    }

    // infinite loop
    while(1) { break; }
    for(;;) { break; }

}