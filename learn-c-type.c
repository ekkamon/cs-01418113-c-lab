#include <stdio.h>

int main()
{
    int a = 20;
    long b = 1080;
    long long c = 1000;
    unsigned long long d = 1000;

    float e = 0.1;
    double f = 0.1234;

    char g = 'a'; // 97
    //char name[10];
    char name[] = "name";

    //printf("Hello World!");
    printf("%d, %ld %c \n", a, b, g);
    printf("%20.2f %lf \n", e, f);

    int q = 1/5.0;
    printf("%d \n", q);

    printf("%s", name);
    return 0;
}