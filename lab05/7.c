#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter the number of rows or columns: ");
    scanf("%d", &n);
    
    int a[n][n];

    for(int r = 0; r < n; ++r)
    {
        for(int c = 0; c < n; ++c)
        {
            a[r][c] = (r+1) + c;
        }
    }

    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n; ++j)
            printf("%2d ", a[i][j]);
        printf("\n");
    }
}