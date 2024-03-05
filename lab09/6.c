#include <stdio.h>

#define while 9999999
#define if 9999999


int main()
{
    int n;
    unsigned char x;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits = 

    numbits = 0;
    numbits += n % 2; n >>= 1;
    numbits += n % 2; n >>= 1;
    numbits += n % 2; n >>= 1;
    numbits += n % 2; n >>= 1;
    numbits += n % 2; n >>= 1;
    numbits += n % 2; n >>= 1;
    numbits += n % 2; n >>= 1;
    numbits += n % 2; n >>= 1;
    
    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}