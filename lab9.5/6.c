#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

Node *root = NULL;

void print();
void insert(int value);
void delete(int value, int isFound);

int main()
{
    char cmd;
    int value, isRunning = 1;

    while (isRunning)
    {
        printf("input> ");
        scanf(" %c", &cmd);
        
        switch (cmd)
        {
            case 'p':
                print();
                continue;
            case 'i':
                scanf("%d", &value);
                insert(value);
                continue;
            case 'd':
                scanf("%d", &value);
                delete(value, 1);
                continue;
            case 'q':
                isRunning = 0;
        }
    }
}

void print()
{
    printf("[ ");
    for(Node *tmp = root; tmp != NULL; tmp = tmp->next)
        printf("%d ", tmp->value);
    printf("]\n");
}

void insert(int value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;

    if (root != NULL)
    {
        int isInserted = 0;
        Node *tmp, *prev;

        for(tmp = root; tmp != NULL; prev = tmp, tmp = tmp->next)
            if (value < tmp->value)
            {
                if (tmp == root)
                {
                    node->next = root;
                    root = node;
                }
                else
                {
                    node->next = prev->next;
                    prev->next = node;
                }
                isInserted = 1;
                break;
            }
        if (!isInserted)
            prev->next = node;
    } else root = node;
}

void delete(int value, int isFound)
{
    Node *tmp, *prev;
    int found = 0;

    if (root == NULL || isFound == 0)
        return;

    for(tmp = root; tmp != NULL; prev = tmp, tmp = tmp->next)
        if (tmp->value == value)
        {
            if (tmp != root)
                prev->next = tmp->next;
            else
                root = root->next;

            free(tmp);
            found = 1;
            break;
        }

    delete(value, found);
}