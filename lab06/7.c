#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
	int num, count, target, i;

	scanf("%d", &num);
	scanf("%d", &count);

	int numbers[num];
	int *numbersPtr = &numbers[0];

    // initialize array numbers from 1 to num by numbersPtr
    for(int i = 1; i <= num; ++i, numbersPtr++)
    {
        *numbersPtr = i;
    }

	// loop through count
	for (int i = 0; i < count; ++i)
    {
        scanf("%d", &target);
        removeTarget(&numbers[0], num, target);
    }
        
    numbersPtr = &numbers[0];

	// print elements in numbers using numberPtr
    for(int i = 0; i < num; i++, numbersPtr++)
        printf("%d ", *numbersPtr);
}

void removeTarget(int *array, int size, int target)
{
    int i, j;

    for (i = 0; i < size; i++)
        if (array[i] == target)
            for(j = i; j < size-1; j++)
                array[j] = array[j+1];

            i = 0;
            array[size-1] = 0;
}