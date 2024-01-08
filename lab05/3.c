#include <stdio.h>

int isOperator(char str);

int main()
{
    float initValue;

    printf("Initial Value: ");
    scanf("%f", &initValue);

    int isBreak = 0;
    while(!isBreak)
    {
        float value;
        char operator;

        printf("\nOperator: ");
        scanf(" %c", &operator);

        if (!isOperator(operator)) break;

        printf("Input Value: ");
        scanf("%f", &value);

        switch ((int)operator)
        {
            case '+':
                initValue += value;
                break;
            case '-':
                initValue -= value;
                break;
            case '*':
                initValue *= value;
                break;
            case '/':
                initValue /= value;
                break;
        }

        printf("Present Value is %.4f\n", initValue);
    }

    printf("\nFinish Calculation. Final Value is %.4f", initValue);
}

int isOperator (char str)
{
    char data[] = { '+', '-', '*', '/'};
    for(int i = 0; i < 4; ++i){
        if (str == data[i]) {
            return 1;
        }
    }

    return 0;
}