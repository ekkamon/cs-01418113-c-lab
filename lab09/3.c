#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x, y;
} Point;

int main()
{
    int nums, i;

    printf("Number of Points: ");
    scanf("%d", &nums);

    Point *arr = (Point *)malloc(nums * sizeof(Point));

    for(i = 0; i < nums; i++)
    {
        float x, y;
        printf("P%d.X: ", i+1);
        scanf("%f", &x);
        printf("P%d.Y: ", i+1);
        scanf("%f", &y);

        arr[i].x = x;
        arr[i].y = y;
    }

    printf("Length:\n");

    for(i = 0; i < nums-1; i++)
    {
        Point curr = arr[i], next = arr[i+1];
        float distance = sqrt(pow((curr.x - next.x), 2) + pow((curr.y - next.y), 2));

        printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n", i+1, curr.x, curr.y, i+2, next.x, next.y, distance);
    }
}