#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct good {
    char name[20];
    struct good *next;
} Good;

Good *start = NULL;

void add_good(Good *new_good);
int print_all_goods();

int main()
{
    char name[21];
    int price;

    printf("Name: ");
    scanf("%20s",name);

    Good *new;
    while(strcmp(name,"done")){
        new = (Good *)malloc(sizeof(Good));
        strcpy(new->name,name);
        new->next = NULL;
        add_good(new);

        printf("Name: ");
        scanf("%20s", name);
    }

    printf("total = %d\n", print_all_goods());
}

void add_good(Good *newGood){
    Good *curr = start;
    Good *prev = NULL;
    
    while(curr)
    {
        prev = curr;
        curr = curr->next;
    }
    
    if (prev != NULL)
        prev->next = newGood;
    else
        start = newGood;
}

int print_all_goods()
{
    int count = 0;
    for(Good *tmp = start; tmp != NULL; tmp = tmp->next, count++)
        printf("%s\n", tmp->name);   
    
    return count;
}