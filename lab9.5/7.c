#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;

void print();
void add(int value);

Node *keys[SIZE] = { NULL };

int main()
{
    while(1)
    {
        char cmd;
        int value;

        printf("input> ");
        scanf(" %1c", &cmd);

        if (cmd == 'q')
            break;

        switch (cmd)
        {
            case 'a':
                scanf("%d", &value);
                add(value);
                break;
            case 'p':
                print();
                break; 
        }
    }
}

void print()
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("KEY %*d: ", i < 10 ? 2 : 0, i);
        
        Node *tmp;
        for(tmp = keys[i]; tmp != NULL; tmp = tmp->next)
            printf("%d ", tmp->item);

        puts("");
    }
        
}

void add(int value)
{
    int idx = value % SIZE;
    
    Node *node = (Node *)malloc(sizeof(Node));
    node->item = value;
    node->next = keys[idx] != NULL ? keys[idx] : NULL;
    keys[idx] = node;
}