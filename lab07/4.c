#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, c;
    int len, size, found = 0;
    
    scanf("%d %d", &len, &size);

    char last_chain[len+1], last_word[len+1];
    for(i = 0; i < size; i++)
    {
        char word[len+1];
        scanf("%s", word);
        strcpy(last_word, word);

        if (found) continue;
        if (i > 0)
        {
            for(j = c = 0; j < len; j++) if (word[j] != last_chain[j]) c++;
            if (c > 2)
            {
                found = 1;
                continue;
            }
        }
        strcpy(last_chain, word);
    }

    printf("%s", found ? last_chain : last_word);
}