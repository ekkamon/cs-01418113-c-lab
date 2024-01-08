#include <stdio.h>

void draw(int staris, int pHead, int pLeg);
int main()
{
    int stairs, step;

    printf("Input number of stairs: ");
    scanf("%d", &stairs);

    int pHead = stairs - 1;
    int pLeg = stairs;

    while(1)
    {
        draw(stairs, pHead, pLeg);

        printf("Input step command: ");
        scanf("%d", &step);

        if (step == 0) break;

        pHead += -step;
        pLeg += -step;

        if (pHead <= 0)
        {
            pHead = 1;
            pLeg = pHead + 1;
        }
        else if (pLeg > stairs)
        {
            pHead = stairs - 1;
            pLeg = stairs;
        }
    }
}

void draw(int staris, int pHead, int pLeg)
{
    static int round = 1;

    printf("---- round %d ----\n", round);
    for (int i = 1; i <= staris; ++i)
    {
        if (i == pHead)
        {
            printf("|-O-|");
        }
        else if (i == pLeg)
        {
            printf("|-^-|");
        }
        else
        {
            printf("|---|");
        }

        printf("\n");
    }

    round++;
}