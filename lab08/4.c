#include <stdio.h>
#define SIZE 5

typedef struct {
    char id[12];
    char grade;
} Score;

void getRecords(Score list[]);
void printRecords(Score list[]);
int main()
{
    Score list[SIZE];

    getRecords(list);
    printRecords(list);
}

void getRecords(Score list[])
{
    for(int i = 0; i < SIZE; i++)
    {
        char id[12];
        int mid, final, total;

        printf("Enter Student ID: ");
        scanf("%s", id);
        printf("Enter Student Midterm: ");
        scanf("%d", &mid);
        printf("Enter Student Final: ");
        scanf("%d", &final);

        sprintf(list[i].id, "%s", id);

        total = mid + final;
        if (total >= 80)
        {
            list[i].grade = 'A';
        }
        else if (total >= 70)
        {
            list[i].grade = 'B';
        }
        else if (total >= 60)
        {
            list[i].grade = 'C';
        }
        else if (total >= 50)
        {
            list[i].grade = 'D';
        }
        else
        {
            list[i].grade = 'F';
        }
    }
}

void printRecords(Score list[])
{
    for(int i = 0; i < SIZE; i++)
        printf("Student ID %s receives grade %c.\n", list[i].id, list[i].grade);
}