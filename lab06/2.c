#include <stdio.h>
#include <stdlib.h>

void convert_grade(char *str, float *grade);
int main()
{
    int count;

    printf("Enter number of subject(s): ");
    scanf("%d", &count);

    float sumTotal = 0.0;
    int sumCredit = 0;

    for(int i = 1; i <= count; ++i)
    {
        int credit; float grade;
        char str[2];

        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%s", &credit, str);

        convert_grade(str, &grade);
        
        sumTotal += credit * grade;
        sumCredit += credit;
    }

    printf("GPA = %.2f", (sumTotal / sumCredit));
}

void convert_grade(char *str, float *grade)
{
    switch (*str)
    {
        case 'a':
        case 'A':
            *grade = 4.0;
            break;
        case 'b':
        case 'B':
            *grade = 3.0;
            break;
        case 'c':
        case 'C':
            *grade = 2.0;
            break; 
        case 'd':
        case 'D':
            *grade = 1.0;
            break;
        case 'f':
        case 'F':
            *grade = 0.0;
            break;
    }
}