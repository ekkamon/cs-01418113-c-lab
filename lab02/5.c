#include <stdio.h>
#include <stdlib.h>

int main() {
    char x[100], y[100], z[1000];

    printf("Enter length of side A: ");
    fgets(x, 100, stdin);

    printf("Enter length of side B: ");
    fgets(y, 100, stdin);
    
    printf("Enter length of side C: ");
    fgets(z, 100, stdin);

    int a = atoi(x), b = atoi(y), c = atoi(z);

    int isLTZero = a <= 0 || b <= 0 || c <= 0;
    int isSumErr = a + b <= c || a + c <= b || c + b <= a;

    if (isLTZero || isSumErr) {
        printf("Triangle type is invalid.");
        return 0;
    }

    if (a == b && a == c && b == c) {
        printf("Triangle type is equilateral.");
    } else if ((a == b && a != c && b != c) || (a == c && b != c && a != b) || (b == c && b != a && c != a)) {
        printf("Triangle type is isosceles.");
    } else {
        printf("Triangle type is scalene.");
    }

    return 0;
}