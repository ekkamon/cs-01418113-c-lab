#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[100], p[100];

    fgets(s, 100, stdin);
    fgets(p, 100, stdin);

    int sticker = atoi(s);
    double price = atof(p);
    int discount = 0;

    if (sticker >= 9) {
        discount = 40;
        sticker -= 9;
    } else if (sticker >= 6) {
        discount = 30;
        sticker -= 6;
    } else if (sticker >= 3) {
        discount = 20;
        sticker -= 3;
    } else if (sticker >= 2) {
        discount = 15;
        sticker -= 2;
    } else if (sticker >=  1) {
        discount = 10;
        sticker--;
    }

    printf("You get %d percents discount.\n", discount);
    printf("Total amount due is %.2f Baht.\n", price - (price * (discount / 100.0)));
    printf("And you have %d stickers left.", sticker);
    
    return 0;
}