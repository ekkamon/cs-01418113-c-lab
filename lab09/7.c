#include <stdio.h>

double findAverage(char *filename);

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}

double findAverage(char *filename)
{
    FILE *file;

    if ((file = fopen(filename, "r")) == NULL)
        return -1;

    int sum = 0, total = 0;
    char buff[1024];
    while(fgets(buff, sizeof(buff), file) != NULL)
    {
        int value;
        
        sscanf(buff, "%d", &value);
        sum += value;
        total++;
    }

    fclose(file);
    return (double)sum / total;
}