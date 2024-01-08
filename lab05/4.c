#include <stdio.h>

int main()
{
    int n;
    double pi = 4.00;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) return 0;

    int q = 3;
    for(int i = 0; i < n-1; ++i)
    {
        if (i % 2 == 0)
            pi -= (4.00 / q);
        else
            pi += (4.00 / q);

        q += 2;
    }

    printf("%.10f", pi);
}