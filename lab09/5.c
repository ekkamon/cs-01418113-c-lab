#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} node;

void printList(node *pList);
void insertNode(node **pList, int value);

int main()
{
    int i, value;
    node *pList = NULL;

    int data[] = {10, 1, 20, 5, 3, 2};

    for (i = 0; i < sizeof(data) / sizeof(int); i++)
    {
        //scanf(" %d", &value);
        insertNode(&pList, data[i]);
    }

    printList(pList);
}

void printList(node *pList)
{
    for(node *tmp = pList; tmp != NULL; tmp = tmp->next)
        printf("%d ", tmp->value);
}

void insertNode(node **pList, int value)
{
    node *link = (node *)malloc(sizeof(node));
    link->value = value;
    link->next = NULL;

    if (*pList != NULL)
    {
        node *tmp, *prev;
        for(tmp = prev = *pList; tmp != NULL; prev = tmp, tmp = tmp->next)
            if (value < tmp->value)
            {
                if (*pList == tmp)
                {
                    link->next = tmp;
                    *pList = link;
                }
                else
                {
                    prev->next = link;
                    link->next = tmp;
                }
                break;
            }
        if (*pList != link)
            prev->next = link;
        
    } else *pList = link;
}