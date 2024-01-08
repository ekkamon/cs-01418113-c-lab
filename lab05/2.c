#include <stdio.h>
#include <math.h>

int find(int num, int *arr);

int main()
{
    int num;
    scanf("%d", &num);

    int data[3];
    if(find(num, data) == 1) {
        printf("(%d, %d, %d)", data[0], data[1], data[2]);
    } else {
        printf("No triple found.");
    }
}

int find(int num, int *arr)
{
    for(int a = 3; a < num; a++)
    {
        for(int b = a + 1; a+b < num; b++)
        {
            int total = (int)(pow(a, 2) + pow(b, 2));
            double c = sqrt(total);

            if (fmod(c, 1) == 0 && (a + b + (int)c) == num){
                arr[0] = a;
                arr[1] = b;
                arr[2] = c;

                return 1;
            }
        }
    }

    return 0;
}