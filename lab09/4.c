#include <stdio.h>
#include <string.h>

struct Word {
    int count;
    char word[21];
};

int main()
{
    char input[21];
    int i, last_word = 0, find = 0;
    
    struct Word data[20] = {0};

    scanf("%20s", input);

    while(1)
    {
        if (last_word > 0)
            scanf("%20s", input);

        if (strcmp(input, "exit") == 0)
            break;

        find = -1;
        for(int j = i = 0; j < 20; j++)
            if (strcmp(input, data[j].word) == 0)
            {
                find = j;
                break;
            }

        if (find == -1)
        {
            strcpy(data[last_word].word, input);
            data[last_word].count++;
            last_word++;
        }
        else data[find].count++;
    }
    

    printf("Output:\n");

    for(i = 0; i < last_word; i++)
        printf("%s = %d\n", data[i].word, data[i].count);
}