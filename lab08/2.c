#include <stdio.h>
#include <string.h>

typedef struct {
    char id[12];
    int score;
} studentRecord;

void init(studentRecord list[], int size);
void enterScore(studentRecord list[], int size);
void printRecords(studentRecord list[], int size);

int main()
{
	int enter;
	studentRecord list[3];

	init(list, 3);
    enterScore(list, 3);
	printRecords(list, 3);
}

void init(studentRecord list[], int size) 
{
    for(int i = 0; i < size; i++)
    {
        sprintf(list[i].id, "%ld", (long)55100000 + (i+1));
        list[i].score = 0;
    }
}

void enterScore(studentRecord list[], int size)
{
    char keyword[12];
    int score;

    scanf("%s %d", keyword, &score);

    for(int i = 0; i < size; i++)
    {
        char *res = strstr(list[i].id, keyword);
        if(res != NULL)
        {
            list[i].score = score;
            break;
        }
    }
}

void printRecords(studentRecord list[], int size)
{
	printf("   ID        Score\n");
	for (int i = 0; i < size; i++)
		printf("%s       %d\n", list[i].id, list[i].score);
}