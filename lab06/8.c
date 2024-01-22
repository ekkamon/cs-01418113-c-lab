#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
    int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	for (i = 0; i < numPrisoners; i++) {
		static int x;
		int arrLen = numPrisoners - i;

		x += m - 1;

		//printf("bf: %d -> ", x);
		if (arrLen == 1)
			x = 0;
		else if (x > arrLen-1)
			x %= arrLen;

		killerPtr = &prisoners[x];
		//printf("%d len=%d, \n", x, arrLen);

		killed[i] = *killerPtr;
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);
	}

	for (i = 0; i < numPrisoners; i++)
		printf("%d ", killed[i]);
}

void removeKilled(int *array, int size, int killedPrisoner)
{
	int i, j, k;
	int newArr[size];
	
	for(i = j = 0; i < size; ++i)
		if (*(array + i) != killedPrisoner)
			newArr[j++] = array[i];

	for(k = 0; k < size; k++) array[k] = newArr[k];
}