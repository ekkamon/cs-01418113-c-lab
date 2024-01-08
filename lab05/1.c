#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int len(char *str);

int main()
{
    char str_n[10];

    printf("Input n = ");
    scanf("%s", str_n);
    
    long n = atol(str_n);
    long pN = n * n;
    
    printf("n^2 = %ld\n", pN);
    if (n == (pN % (long)pow(10, len(str_n)))) {
        printf("Yes. %ld is automorphic number.", n);
    } else {
        printf("No. %ld is not automorphic number.", n);
    }
}

int len(char *str)
{
    int i = 0;
    while (*(str + i) != '\0') i++;
    return i;
}